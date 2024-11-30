//
// Copyright(c) 2015 Gabi Melman.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

// spdlog usage example

#include <cstdio>
#include <chrono>

#include "spdlog/spdlite.h"
#include "spdlog/sinks/stdout_color_sinks.h"

int main(int, char *[]) {
    spdlog::lite_logger logger("console", {std::make_shared<spdlog::sinks::stdout_color_sink_mt>()});
    logger.info("Hello {} {} !!", "param1", 123.4);
    logger.warn("Some warning message");


}