#include "salesman.h"
#include "ui_salesman.h"

salesman::salesman(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::salesman)
{
    ui->setupUi(this);
}

salesman::~salesman()
{
    delete ui;
}
