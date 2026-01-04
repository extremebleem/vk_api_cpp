cmake_minimum_required(VERSION 3.28)

project(vk_api_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(CURL REQUIRED)

file(GLOB_RECURSE SOURCES "cpp/*.cpp")
file(GLOB_RECURSE HEADERS "cpp/*.hpp")

add_library(vk_api_cpp STATIC ${SOURCES} ${HEADERS})

target_include_directories(vk_api_cpp PUBLIC cpp)
target_link_libraries(vk_api_cpp PUBLIC CURL::libcurl)