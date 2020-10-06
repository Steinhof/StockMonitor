#ifndef STOCKMONITOR_H
#define STOCKMONITOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class StockMonitor; }
QT_END_NAMESPACE

class StockMonitor : public QMainWindow
{
    Q_OBJECT

public:
    StockMonitor(QWidget *parent = nullptr);
    ~StockMonitor();

private:
    Ui::StockMonitor *ui;
};
#endif // STOCKMONITOR_H
