// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include "Demuxer.h"

std::string TEST_SAMPLE_FILE = R"(C:\Users\bji\Desktop\avcpp\samples\big_buck_bunny.mp4)";

TEST_CASE("avformat APIs", "[avformat]" ) {
    SECTION("avformat_open_input") {
        av::Demuxer demuxer(TEST_SAMPLE_FILE);
    }
}