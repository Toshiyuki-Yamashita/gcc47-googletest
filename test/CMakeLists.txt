enable_testing()

include_directories(${GTEST_INCLUDE_DIRS} ${GMOCK_INCLUDE_DIRS})
#link_directories(${GTEST_LIBS_DIR} ${GMOCK_LIBS_DIR} ${PROJECT_SOURCE_DIR}/src)
link_directories(${GTEST_LIBS_DIR} ${GMOCK_LIBS_DIR})

file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)
add_executable(sample_test ${TEST_SRC_FILES})

target_link_libraries(sample_test
# pthread
# ${Boost_LIBRARIES}
# rt
  sample)
target_link_libraries(sample_test
  gtest
  gtest_main)
target_link_libraries(sample_test
  gmock
  gmock_main)
