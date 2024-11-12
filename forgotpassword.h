#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>

namespace Ui {
class forgotPassword;
}

class forgotPassword : public QDialog
{
    Q_OBJECT

public:
    explicit forgotPassword(QWidget *parent = nullptr);
    ~forgotPassword();
    QString getEmail();
    QString getPassword();
    QString getConfirmedPassword();


private slots:
    void changePassword();


private:
    Ui::forgotPassword *ui;
};

#endif // FORGOTPASSWORD_H
