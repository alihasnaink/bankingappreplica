#ifndef SENDMONEY_H
#define SENDMONEY_H

#include <QDialog>

namespace Ui {
class sendmoney;
}

class sendmoney : public QDialog
{
    Q_OBJECT

public:
    explicit sendmoney(QWidget *parent = nullptr);
    ~sendmoney();

private:
    Ui::sendmoney *ui;
};

#endif // SENDMONEY_H
