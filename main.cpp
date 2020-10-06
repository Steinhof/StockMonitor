#include "stockmonitor.h"

#include <QApplication>
#include <src/connect/Database.h>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    StockMonitor window;

    Database::init();
    window.show();


    return QApplication::exec();
}
