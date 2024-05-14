# Series Catalog Management
Network and TV Series Catalog System (STVS) in C++ with a command line interface (CLI). Organized system, following object-oriented programming (OOP) standards and robust programming practices.

## How to running??
Run:
`g++ main.cpp Controller.cpp Menu.cpp -o output -L/usr/include/mariadb/mysql -lmariadbclient && ./output`
`g++ main.cpp Controller.cpp Menu.cpp ServerDBConnection.cpp AbstractSeriesDAO.cpp MemoryDBConnection.cpp Series.cpp SeriesDBDAO.cpp SeriesMemDAO.cpp -o output `mysql_config --libs` -L/usr/include/mariadb/conncpp -lmariadbcpp && ./output`