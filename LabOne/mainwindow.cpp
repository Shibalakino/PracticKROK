#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QValidator>
#include <QString>
#include <time.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Continue->setEnabled(false);

    QRegExp exp("[1-9]{1,99}");
    ui->NumberOfArray->setValidator(new QIntValidator);
    connect(ui->NumberOfArray ,SIGNAL(textChanged(QString)),this,SLOT(OkEnabled()));
}

void MainWindow::OkEnabled()
{
    ui -> Continue ->setEnabled(ui->NumberOfArray->hasAcceptableInput());
}


MainWindow::~MainWindow()
{
    delete ui;
}

    void MainWindow::on_Continue_clicked()
    {
        int n;
        QString field = ui->NumberOfArray ->text();
        n = field.toInt();
        srand(time(NULL));
        int *mas = new int [n];
           for(int i = 0; i < n; i++)
           {
               mas[i] = rand()%100;
           }
           for(int i = 0; i < n; i++ )
           {
             ui->textBrowser->insertPlainText(QString::number(mas[i]));
               ui->textBrowser->insertPlainText(QString(' '));
           }
           for(int i = 0; i < n; i++)
           {

                   if (((mas[i] != 0) && ((mas[i]& (~mas[i] + 1)) == mas[i])))
                   {
                       ui->textBrowser_2->insertPlainText(QString::number(mas[i]));
                         ui->textBrowser_2->insertPlainText(QString(' '));

                   }

           }
    }






