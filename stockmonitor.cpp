#include "stockmonitor.h"
#include "./ui_stockmonitor.h"

StockMonitor::StockMonitor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StockMonitor)
{
    ui->setupUi(this);
}

StockMonitor::~StockMonitor()
{
    delete ui;
}

