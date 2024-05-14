/*
 * ServerDBConnection.cpp
 *
 *  Created on: Apr 29, 2024
 *      Author: andre
 */

#include <iostream>
#include "ServerDBConnection.h"

ServerDBConnection::ServerDBConnection()
	{
	try
		{
		this->driver = sql::mariadb::get_driver_instance();
		string connString = "jdbc:mariadb://" + serverIP + ":" + serverPort + "/" + serverDatabase;
		sql::SQLString url(connString);
		sql::Properties properties(
			{
				{ "user", this->serverUser },
				{ "password", this->serverPassword } });

		this->connection = driver->connect(url, properties);
		}
	catch (sql::SQLException &myException)
		{
		std::cerr << "Error Connecting to MariaDB Platform: \n" << myException.what() << std::endl;
		exit(1);
		}

	}

ServerDBConnection::~ServerDBConnection()
	{
	this->connection->close();
	}

sql::Connection* ServerDBConnection::getConnection() const
	{
	return (this->connection);
	}

