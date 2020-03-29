add_library(avcpp Demuxer.cpp)
target_include_directories(avcpp PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(avcpp PRIVATE ${FFMPEG_LIBRARIES})