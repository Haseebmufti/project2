#include "permanent.h"
#include "ui_permanent.h"

permanent::permanent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::permanent)
{
    ui->setupUi(this);
}

permanent::~permanent()
{
    delete ui;
}

void permanent::on_entry_permanent_clicked()
{
    entryinfonew = new newPermanent(this);
    entryinfonew->show();
}
