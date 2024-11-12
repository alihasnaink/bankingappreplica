#ifndef DEBITCARD_H
#define DEBITCARD_H

#include <QDialog>

namespace Ui {
class debitcard;
}

class debitcard : public QDialog
{
    Q_OBJECT

public:
    explicit debitcard(QWidget *parent = nullptr);
    ~debitcard();

private:
    Ui::debitcard *ui;
};

#endif // DEBITCARD_H
