#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num1=0;
    num2=0;
    result=0;
    isnum1=true;
    opetrat=0;
    iscontinue=false;
    opetrahasclicked=false;
    str="";

    QFont font;
    font.setPixelSize(20);
    ui->label->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button_1_clicked()
{
    if(iscontinue){
        num1=1;
        str="1";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+1;
                }
            else{
                num2=num2*10+1;

                    }
            str+="1";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_2_clicked()
{
    if(iscontinue){
        num1=2;
        str="2";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+2;
                }
            else{
                num2=num2*10+2;

                    }
            str+="2";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_3_clicked()
{
    if(iscontinue){
        num1=3;
        str="3";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+3;
                }
            else{
                num2=num2*10+3;

                    }
            str+="3";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_4_clicked()
{
    if(iscontinue){
        num1=4;
        str="4";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+4;
                }
            else{
                num2=num2*10+4;

                    }
            str+="4";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_5_clicked()
{
    if(iscontinue){
        num1=5;
        str="5";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+5;
                }
            else{
                num2=num2*10+5;

                    }
            str+="5";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_6_clicked()
{
    if(iscontinue){
        num1=6;
        str="6";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+6;
                }
            else{
                num2=num2*10+6;

                    }
            str+="6";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_7_clicked()
{
    if(iscontinue){
        num1=7;
        str="7";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+7;
                }
            else{
                num2=num2*10+7;

                    }
            str+="7";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_8_clicked()
{
    if(iscontinue){
        num1=8;
        str="8";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+8;
                }
            else{
                num2=num2*10+8;

                    }
            str+="8";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_9_clicked()
{
    if(iscontinue){
        num1=9;
        str="9";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+9;
                }
            else{
                num2=num2*10+9;

                    }
            str+="9";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_0_clicked()
{
    if(iscontinue){
        num1=0;
        str="0";
        ui->label->setText(str);
        iscontinue=false;
        isnum1=true;

    }
    else{
            if(isnum1){
                  num1=num1*10+0;
                }
            else{
                num2=num2*10+0;

                    }
            str+="0";
            ui->label->setText(str);
        }
}


void MainWindow::on_Button_10_clicked()
{
    if(iscontinue)
    {
        num1=result;
        iscontinue=false;
    }
        if(!opetrahasclicked)
        {
            isnum1=false;
            str+="+";
            ui->label->setText(str);
            opetrat=1;//加
            opetrahasclicked=true;
        }
       else
           {
            str=str.left(str.length() - 1);
            isnum1=false;
            str+="+";
            ui->label->setText(str);
            opetrat=1;//加

        }
}


void MainWindow::on_Button_12_clicked()
{
    if(iscontinue)
    {
        num1=result;
        iscontinue=false;
    }
    if(!opetrahasclicked)
    {
        isnum1=false;
        str+="-";
        ui->label->setText(str);

        opetrat=2;//减
        opetrahasclicked=true;
    }
   else
       {
        str=str.left(str.length() - 1);
        isnum1=false;
        str+="-";
        ui->label->setText(str);
        opetrat=2;//减

    }
}


void MainWindow::on_Button_15_clicked()
{
    if(iscontinue)
    {
        num1=result;
        iscontinue=false;
    }
    if(!opetrahasclicked)
    {
        isnum1=false;
        str+="*";
        ui->label->setText(str);
        opetrat=3;//乘
        opetrahasclicked=true;
    }
   else
       {
        str=str.left(str.length() - 1);
        isnum1=false;
        str+="*";
        ui->label->setText(str);
        opetrat=3;//乘

    }
}


void MainWindow::on_Button_13_clicked()
{
    if(iscontinue)
    {
        num1=result;
        iscontinue=false;
    }
    if(!opetrahasclicked)
    {
        isnum1=false;
        str+="/";
        ui->label->setText(str);

        opetrat=4;//除
        opetrahasclicked=true;
    }
   else
       {
        str=str.left(str.length() - 1);
        isnum1=false;
        str+="/";
        ui->label->setText(str);
        opetrat=4;//除

    }
}


void MainWindow::on_Button_16_clicked()
{

    switch(opetrat)
    {
        case 1:
            result=num1+num2;
            str.setNum(result);
             ui->label->setText(str);
              qDebug() << result << endl ;
            break;
        case 2:
            result=num1-num2;
            str.setNum(result);
             ui->label->setText(str);
              qDebug() << result << endl ;
            break;
        case 3:
            result=num1*num2;
            str.setNum(result);

             ui->label->setText(str);
             qDebug() << result << endl ;
            break;
         case 4:
        if(num2==0){
            str.clear();
            ui->label->setText("出错");
             qDebug() << result << endl ;
            break;
        }
        else{
            result=num1/num2;
            str.setNum(result);
             ui->label->setText(str);
              qDebug() << result << endl ;
            break;
         }
    }
    num1=0;
    num2=0;
    opetrat=0;
    opetrahasclicked=false;
    isnum1=true;
    iscontinue=true;


}


void MainWindow::on_Button_14_clicked()
{
    num1=0;
    num2=0;
    result=0;
    isnum1=true;
    opetrat=0;
    iscontinue=false;
    opetrahasclicked=false;
    str.clear();
    ui->label->setText("请输入");
}

