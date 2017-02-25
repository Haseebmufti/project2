#include "newpermanent.h"
#include "ui_newpermanent.h"

newPermanent::newPermanent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newPermanent)
{
    ui->setupUi(this);
}

newPermanent::~newPermanent()
{
    delete ui;
}
