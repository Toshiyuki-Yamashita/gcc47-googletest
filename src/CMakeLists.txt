file(GLOB PROJECT_SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.hpp)
file(GLOB PROJECT_SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_library(sample STATIC
  ${PROJECT_SRC_FILES}
)

#target_link_libraries(sample ${Boost_LIBRARIES})

