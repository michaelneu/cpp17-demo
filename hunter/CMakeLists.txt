cmake_minimum_required(VERSION 3.2)

include("cmake/HunterGate.cmake")
HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.23.34.tar.gz"
    SHA1 "70287b1ffa810ee4e952052a9adff9b4856d0d54"
)

project(DateDemo)

add_definitions("-std=c++17")

hunter_add_package(Boost COMPONENTS date_time)
find_package(Boost CONFIG REQUIRED date_time)

add_executable(date date.cpp)
target_link_libraries(date PUBLIC Boost::date_time)
