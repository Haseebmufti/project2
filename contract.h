#ifndef CONTRACT_H
#define CONTRACT_H

#include <QMainWindow>

namespace Ui {
class contract;
}

class contract : public QMainWindow
{
    Q_OBJECT

public:
    explicit contract(QWidget *parent = 0);
    ~contract();

private:
    Ui::contract *ui;
};

#endif // CONTRACT_H
