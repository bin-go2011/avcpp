add_library(Catch2::Catch2 INTERFACE IMPORTED)
set_target_properties(Catch2::Catch2 PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/catch2"
)

add_executable(avformat_test avformat_test.cpp)
target_link_libraries(avformat_test Catch2::Catch2 avcpp)
