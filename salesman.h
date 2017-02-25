#ifndef SALESMAN_H
#define SALESMAN_H

#include <QMainWindow>

namespace Ui {
class salesman;
}

class salesman : public QMainWindow
{
    Q_OBJECT

public:
    explicit salesman(QWidget *parent = 0);
    ~salesman();

private:
    Ui::salesman *ui;
};

#endif // SALESMAN_H
