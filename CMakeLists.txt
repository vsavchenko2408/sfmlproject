cmake_minimum_required(VERSION 3.5)

project(sfmlproject)

include_directories(SFML/include)

link_directories(SFML/lib)

add_executable(sfmlproject src/main.cpp src/Game.cpp)

target_link_libraries(sfmlproject sfml-graphics sfml-window sfml-system)
