#ifndef DEPOSITMONEY_H
#define DEPOSITMONEY_H

#include <QDialog>

namespace Ui {
class depositmoney;
}

class depositmoney : public QDialog
{
    Q_OBJECT

public:
    explicit depositmoney(QWidget *parent = nullptr);
    ~depositmoney();

private:
    Ui::depositmoney *ui;
};

#endif // DEPOSITMONEY_H
