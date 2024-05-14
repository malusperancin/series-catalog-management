cmake_minimum_required(VERSION 3.28)
project(ProjetoPOO)

set(CMAKE_CXX_STANDARD 17)
include_directories(/usr/include/mariadb /usr/include/mariadb/conncpp)

add_executable(ProjetoPOO main.cpp
        Controller.cpp
        Menu.cpp
        Series.cpp
        SeriesDBDAO.cpp
        MemoryDBConnection.cpp
        SeriesMemDAO.cpp
        ServerDBConnection.cpp
        AbstractSeriesDAO.cpp)

target_link_libraries(ProjetoPOO mariadbcpp)