#ifndef NEWPERMANENT_H
#define NEWPERMANENT_H

#include <QMainWindow>

namespace Ui {
class newPermanent;
}

class newPermanent : public QMainWindow
{
    Q_OBJECT

public:
    explicit newPermanent(QWidget *parent = 0);
    ~newPermanent();

private:
    Ui::newPermanent *ui;
};

#endif // NEWPERMANENT_H
