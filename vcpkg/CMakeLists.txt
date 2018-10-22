project(DateDemo)
cmake_minimum_required(VERSION 3.0)

add_definitions("-std=c++17")

find_package(Boost COMPONENTS date_time REQUIRED)

add_executable(date date.cpp)
target_link_libraries(date PUBLIC Boost::date_time)
