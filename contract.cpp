#include "contract.h"
#include "ui_contract.h"

contract::contract(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::contract)
{
    ui->setupUi(this);
}

contract::~contract()
{
    delete ui;
}
