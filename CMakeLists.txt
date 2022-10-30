cmake_minimum_required(VERSION 3.22.1)

project(PROJ)

add_subdirectory(algo)
add_subdirectory(numbers)
add_subdirectory(cyphers)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ALGO CYPHER CAESAR NUMBERS RSA)
