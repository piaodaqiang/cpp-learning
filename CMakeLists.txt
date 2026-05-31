cmake_minimum_required(VERSION 4.0)
project(cpp_Learning)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_Learning main.cpp)

file(GLOB_RECURSE LEARNING_SOURCES CONFIGURE_DEPENDS basic/*.cpp)

foreach(source_file ${LEARNING_SOURCES})
    get_filename_component(source_dir ${source_file} DIRECTORY)
    get_filename_component(topic_name ${source_dir} NAME)
    get_filename_component(file_name ${source_file} NAME_WE)
    set(target_name ${topic_name}_${file_name})

    add_executable(${target_name} ${source_file})
endforeach()
