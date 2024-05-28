cmake_minimum_required(VERSION 3.28)
project(ProjetoPOO)

set(CMAKE_CXX_STANDARD 17)
include_directories(/usr/include/mariadb /usr/include/mariadb/conncpp)

add_executable(ProjetoPOO main.cpp
        MainController.cpp
        Menu.cpp
        Series.cpp
        SeriesDBDAO.cpp
        MemoryDBConnection.cpp
        SeriesMemDAO.cpp
        ServerDBConnection.cpp
        AbstractSeriesDAO.cpp
        TextFromFile.cpp
        TextFromFile.h
        SeriesController.cpp
        SeriesController.h
        ReportsController.cpp
        ReportsController.h)

target_link_libraries(ProjetoPOO mariadbcpp)