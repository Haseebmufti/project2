#ifndef PERMANENT_H
#define PERMANENT_H

#include <QMainWindow>
#include "newpermanent.h"

namespace Ui {
class permanent;
}

class permanent : public QMainWindow
{
    Q_OBJECT

public:
    explicit permanent(QWidget *parent = 0);
    ~permanent();

private slots:
    void on_entry_permanent_clicked();

private:
    Ui::permanent *ui;
    newPermanent *entryinfonew;
   };

#endif // PERMANENT_H
