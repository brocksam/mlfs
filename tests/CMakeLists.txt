include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(tests layer_test.cpp)

target_link_libraries(
  tests PUBLIC
  gtest_main
)

target_include_directories(tests PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/src/mlfs")

include(GoogleTest)
gtest_discover_tests(tests)