#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int change(int n)
{
   return n+=1;
}

void MainWindow::on_pushButton_clicked()
{
    QString str = ui -> input ->text();
    int num = str.toInt();
    ui->output->insertPlainText(QString::number(change(num)));
}



void MainWindow::on_clear_clicked()
{
    ui->output->clear();
}
