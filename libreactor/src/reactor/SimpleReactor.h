#ifndef __SIMPLEREACTOR_H__
#define __SIMPLEREACTOR_H__

#include <string>
#include "reactor/Reactor.h"
#include "events/EvBase.h"
#include "reactor/SimpleReactor_sm.h"

class SimpleReactor : public reactor::Reactor {

    public:

        /**
         * @brief Construct a new Simple Reactor object along with the Reactor class
         * 
         * @param p_reactorId The Reactor's Id
         */
        SimpleReactor(int p_reactorId);

        /**
         * @brief Construct a new Simple Reactor object along with the Reactor clas
         * 
         * @param p_reactorId The Reactor's Id
         * @param p_conEndPoint The endpoint to connect to
         */
        SimpleReactor(int p_reactorId, std::string p_conEndPoint);

        /**
         * @brief Destroy the Simple Reactor object
         * 
         */
        ~SimpleReactor();

        /**
         * @brief Gets called when the reactor class receives an EvSimpleMessage event.
         * 
         * @param p_evSimpleMessage The simple message event
         */
        void procSimpleMessage(events::EvBase p_evSimpleMessage);

        /**
         * @brief Gets called when the reactor class receives an EvSimpleNumber event.
         * 
         * @param p_evSimpleNumber The simple number event
         */
        void procSimpleNumber(events::EvBase p_evSimpleNumber);

        /**
         * @brief Print a log statement
         * 
         */
        void printLogStatement();

        /**
         * @brief Sends an EvSimpleMsg event to the given destination
         * 
         * @param p_destRid The id of the reactor to send to
         * @param p_message The message to send
         */
        void sendEvSimpleMsg(int p_destRid, std::string p_message);

        /**
         * @brief Sends an EvSimpleNumber event to the given destination
         * 
         * @param p_destRid The id of the reactor to send to
         * @param p_simpleNum The number to send
         */
        void sendEvSimpleNumber(int p_destRid, int p_simpleNum);

    private:

        /**
         * @brief The finite state machine
         */
        SimpleReactorContext* fsm;

        /**
         * @brief Consumes the message and calls upon an action depending on the message
         * 
         * @param p_message The message
         */
        void consumeMessage(std::string p_message);

        /**
         * @brief Accepts the message. This method will just print out some debug information.
         * 
         * @param p_destRid Where it was supposed to go
         * @param p_failMsgStr The string that says FAIL_TO_DELIVER
         * @param p_message The message that was supposed to send
         * @param p_numOfAttempts The number of times this message has been sent
         */
        void processFailMessage(int p_destRid, std::string p_failMsgStr, std::string p_message, int p_numOfAttempts);

};

#endif // __SIMPLEREACTOR_H__