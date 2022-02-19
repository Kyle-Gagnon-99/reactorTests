#include "reactor/SimpleReactor.h"
#include "reactor/SimpleReactor_sm.h"
#include "events/EvBase.h"
#include "events/EvSimpleMessage.h"
#include "events/EvSimpleNumber.h"
#include "spdlog/spdlog.h"

SimpleReactor::SimpleReactor(int p_reactorId) : reactor::Reactor(p_reactorId) {
    /**
     * There's nothing really more to do here. The Reactor constructor will take care of most things for us
     * 
     */
    fsm = new SimpleReactorContext(*this);
    fsm->enterStartState();
}

void SimpleReactor::consumeMessage(std::string p_message) {

    events::EvBase eventBase;
    eventBase.ParseFromString(p_message);
    events::EvBase::EventsCase eventsCase = eventBase.events_case();

    switch (eventsCase)
    {
    case events::EvBase::EventsCase::kEvSimpleMessage:
        fsm->receivedEvSimpleMsg(eventBase);
        break;
    case events::EvBase::EventsCase::kEvSimpleNumber:
        fsm->receivedEvSimpleNumber(eventBase);
        break;
    case events::EvBase::EventsCase::EVENTS_NOT_SET:
        spdlog::warn("Event not set!");
    default:
        spdlog::error("Unexpected error happened!");
        break;
    }

}

void SimpleReactor::processFailMessage(int p_destRid, std::string p_failMsgStr, std::string p_message, int p_numOfAttempts) {
    spdlog::debug("RID {} failed to deliver to {} with the number of attempts at {} with a message of {}", reactorId, p_destRid, p_numOfAttempts, p_message);
}

void SimpleReactor::procSimpleMessage(events::EvBase p_evSimpleMessage) {
    spdlog::info("Proccess Event Simple Message was called. Source: {} Destination: {} Message: {}", 
                    p_evSimpleMessage.source(), 
                    p_evSimpleMessage.destination(), 
                    p_evSimpleMessage.evsimplemessage().message());
}

void SimpleReactor::procSimpleNumber(events::EvBase p_evSimpleNumber) {
    spdlog::info("Process Event Simple Number was called. Source: {} Destination: {} Number: {}",
                    p_evSimpleNumber.source(),
                    p_evSimpleNumber.destination(),
                    p_evSimpleNumber.evsimplenumber().number());
}

void SimpleReactor::printLogStatement() {
    spdlog::info("Hey! We are just printing a statement.");
}

void SimpleReactor::sendEvSimpleMsg(int p_destRid, std::string p_message) {

    events::EvBase evBase;
    evBase.set_source(reactorId);
    evBase.set_destination(p_destRid);

    events::EvSimpleMessage* evSimpleMsg = evBase.mutable_evsimplemessage();
    evSimpleMsg->set_message(p_message);

    std::string evBaseStr = evBase.SerializeAsString();

    sendMessage(evBase.destination(), evBaseStr); 
    
}

void SimpleReactor::sendEvSimpleNumber(int p_destRid, int p_simpleNumber) {

    events::EvBase evBase;
    evBase.set_source(reactorId);
    evBase.set_destination(p_destRid);

    events::EvSimpleNumber* evSimpleNum = evBase.mutable_evsimplenumber();
    evSimpleNum->set_number(p_simpleNumber);

    std::string evBaseStr = evBase.SerializeAsString();

    sendMessage(evBase.source(), evBaseStr);

}

SimpleReactor::~SimpleReactor() {
    thread_object.join();
}

