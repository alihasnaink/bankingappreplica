#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "accountcreationbox.h"
#include "forgotpassword.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void initializeDatabase();
    void checkLogin();
    void openAccountCreationBox();
    void openForgotPasswordBox();
    void logOut();
    int generateAccountNumber();
    void cardinfo();
    void opendepositmoney();

};
#endif // MAINWINDOW_H
