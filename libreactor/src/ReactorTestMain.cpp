#include "spdlog/spdlog.h"
#include "reactor/SimpleReactor.h"
#include "reactor/EventService.h"

int main() {

    spdlog::set_level(spdlog::level::debug);

    spdlog::debug("Hello from ReactorTestMain.cpp");

    #ifdef USE_EVENT_SERVICE
    reactor::EventService evService;
    evService.start();
    #endif

    SimpleReactor simpleReactor(5);
    simpleReactor.start();

    simpleReactor.sendEvSimpleMsg(5, "Hello World!");
    simpleReactor.sendEvSimpleNumber(5, 101);

    return 0;
}