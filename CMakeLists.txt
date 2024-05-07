cmake_minimum_required(VERSION 3.28)
project(ProjetoPOO)

set(CMAKE_CXX_STANDARD 17)
set(FLA "-L/usr/include/mariadb/mysql -lmariadbclient")

add_executable(ProjetoPOO main.cpp
        Controller.cpp
        Menu.cpp
        Series.cpp)
