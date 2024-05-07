#include <iostream>
#include <mariadb/mysql.h>
#include "Controller.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct connection_details{
    const char *server, *user, *password, *database;
};

MYSQL* mysql_connection_setup(struct connection_details mysql_details){
    MYSQL *connection = mysql_init(NULL);

    if(!mysql_real_connect(connection, mysql_details.server, mysql_details.user, mysql_details.password, mysql_details.database, 0, NULL, 0)){
        // cout << "Connection error" << mysql_error(connection) << endl;
        throw 0;
    }
    return connection;
}

MYSQL_RES* mysql_execute_query(MYSQL *connection, const char *sql_query){
    if(mysql_query(connection, sql_query)){
        // cout << "MySQL Error" << mysql_error(connection) << endl;
        throw 0;
    }
    return mysql_use_result(connection);
}


int main(int argc, char** argv) {

    MYSQL  *con;
    MYSQL_RES *res;
    MYSQL_ROW row;

    struct connection_details mysqlD;
    mysqlD.server = "143.106.243.64";
    mysqlD.user = "Si300A2024_05";
    mysqlD.password = "t7SUQ25B9I";
    mysqlD.database = "Si300A2024_05";

    try {
        con = mysql_connection_setup(mysqlD);
        res = mysql_execute_query(con, "insert into TESTS values (2, 'oie2');");
        res = mysql_execute_query(con, "select * from TESTS;");

        cout << "Displaying:\n" << endl;

        while((row = mysql_fetch_row(res)) != NULL){
            cout << row[0] << "|" << row[1] << endl;
        }

        mysql_free_result(res);
        mysql_close(con);
    }
    catch (...){
        cerr << "Oops... We got an error connecting to the database. The system is working with local memory.\n" << endl;
    }

    Controller *controller = new Controller();

    controller->start();

    delete controller;

    return 0;
}
