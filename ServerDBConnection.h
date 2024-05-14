/*
 * ServerDBConnection.h
 *
 *  Created on: Apr 29, 2024
 *      Author: andre
 */

#include <mariadb/conncpp.hpp>

#ifndef SERVERDBCONNECTION_H_
#define SERVERDBCONNECTION_H_

using namespace std;

class ServerDBConnection final
	{
	private:
		string serverPort = "3306";

		string serverIP = "143.106.243.64";
		string serverDatabase = "Si300A2024_05";
		string serverUser = "Si300A2024_05";
		string serverPassword = "t7SUQ25B9I";

		sql::Driver *driver = NULL;
		sql::Connection *connection;

	public:
		ServerDBConnection();
		virtual ~ServerDBConnection();
		sql::Connection* getConnection() const;
	};

#endif /* SERVERDBCONNECTION_H_ */
