add_executable(tests test_print.cpp)
target_link_libraries(tests PRIVATE print gtest_main)
add_test(NAME tests COMMAND tests)
