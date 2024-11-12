#ifndef ACCOUNTCREATIONBOX_H
#define ACCOUNTCREATIONBOX_H

#include <QDialog>

namespace Ui {
class accountCreationBox;
}

class accountCreationBox : public QDialog
{
    Q_OBJECT

public:
    explicit accountCreationBox(QWidget *parent = nullptr);
    ~accountCreationBox();
    QString getUsername() const;
    QString getPassword() const;
    QString getEmail() const;
    QString getAccountType() const;
    QString getCardType() const;
    QString getFullname();
    bool isUsernameOrEmailTaken(const QString &username, const QString &email);


private slots:
    void submitAccount();

private:
    Ui::accountCreationBox *ui;
};

#endif // ACCOUNTCREATIONBOX_H
