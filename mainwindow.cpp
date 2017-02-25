#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_next_main_clicked()
{
    if (ui->permanent->isChecked()){
        monthly = new permanent(this);
        monthly->show();
    }
    else if (ui->contract->isChecked()){
        hourly = new contract(this);
        hourly->show();
    }
    else if (ui->sales->isChecked()){
        bonus = new salesman(this);
        bonus->show();
    }
else { QMessageBox::critical(this,"Select an option","input required");
    }
}
void MainWindow::on_quit_main_clicked()
{
    QApplication::quit();
}
