#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_1_clicked();

    void on_Button_2_clicked();

    void on_Button_3_clicked();

    void on_Button_4_clicked();

    void on_Button_5_clicked();

    void on_Button_6_clicked();

    void on_Button_7_clicked();

    void on_Button_8_clicked();

    void on_Button_9_clicked();

    void on_Button_0_clicked();

    void on_Button_10_clicked();

    void on_Button_12_clicked();

    void on_Button_15_clicked();

    void on_Button_13_clicked();

    void on_Button_16_clicked();

    void on_Button_14_clicked();

private:
    Ui::MainWindow *ui;
    double num1,num2,result;//储存两个数和结果
    bool isnum1;//判断是否为第一个数
    int opetrat;//储存四个运算字符
    QString str;//显示的内容
    bool iscontinue;//判断一次结束后是否继续
     bool opetrahasclicked;//判断运算符是否按下过一次

};
#endif // MAINWINDOW_H
