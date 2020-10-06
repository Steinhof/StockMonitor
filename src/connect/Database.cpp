#include <QtSql/QSqlDatabase>
#include <iostream>
#include "database.h"

void database::init() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("market");
    db.setUserName("postgres");
    db.setPassword("root");
    bool isOpen = db.open();

    std::cout << isOpen;
}
