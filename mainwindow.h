#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "permanent.h"
#include "contract.h"
#include "salesman.h"
#include "newpermanent.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_next_main_clicked();

    void on_quit_main_clicked();

private:
    Ui::MainWindow *ui;
     permanent *monthly;
     contract *hourly;
     salesman *bonus;
};

#endif // MAINWINDOW_H
