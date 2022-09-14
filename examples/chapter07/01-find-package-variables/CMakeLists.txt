cmake_minimum_required(VERSION 3.20.0)
project(FindPackageProtobufVariables CXX)

set(CMAKE_CXX_STANDARD 23)

#find_package(Protobuf REQUIRED)
#message("IMPORTED:${IMPORTED}")


#protobuf_generate_cpp(GENERATED_SRC GENERATED_HEADER
#        message.proto)

add_executable(main main.cpp)
#add_executable(main main.cpp
#        ${GENERATED_SRC} ${GENERATED_HEADER})
#target_link_libraries(main PRIVATE ${Protobuf_LIBRARIES})
#target_include_directories(main PRIVATE
#        ${Protobuf_INCLUDE_DIRS}
#        ${CMAKE_CURRENT_BINARY_DIR})


set(pxr_ROOT ~/dev/CLionProjects/USD/local-build-USD)
find_package(pxr REQUIRED)

target_link_libraries(main PRIVATE usd)
#target_include_directories(main PRIVATE
#        ${PXR_INCLUDE_DIRS})

get_directory_property(bt BUILDSYSTEM_TARGETS)
get_directory_property(imtg IMPORTED_TARGETS)

add_custom_command(TARGET main POST_BUILD
        COMMAND echo ARGS "'bt:${bt}it:${imtg}'")

