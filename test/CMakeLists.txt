add_executable(test-adding test-adding.cpp)
target_link_libraries(test-adding adder)
add_test(adder-adding test-adding)
