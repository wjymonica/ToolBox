#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtGui>
#include <QtWidgets>
#include <QProcess>
#include <QString>
#include <QDesktopServices>
#include <QUrl>
#include <stdlib.h>
#include <iostream>
#include <QApplication>
#include <iostream>
#include <string.h>
#include <string>
#include <QMainWindow>
#include <QFile>
using namespace std;
int getpmdbegin()
{
    QString path;
    QDir dir;
    path=dir.currentPath();
    QString fullpath=path+"/toolbox.cfg";
    string t=path.toStdString();
//    cout<<t<<"\n";
    QString a;
    QFile *file=new QFile(fullpath);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    a=QString(file->readAll());

    string b=a.toStdString();


    const char *k = b.c_str();

    int count=0;
    int countpmd5=0;
    int countpmd4=0;
    int countastyle5=0;
    int countastyle4=0;
    int countoutput5=0;
    int countoutput4=0;
    int countcppcheck5=0;
    int countcppcheck4=0;

    for(int i=0; i<1024; i++)
    {

        if(count==5&&k[i]=='$')
        {
            countcppcheck4=i;
            count++;
        }
        if(count==4&&k[i]=='%')
        {
            countcppcheck5=i;
            count++;
        }
        if(count==3&&k[i]=='$')
        {
            countastyle4=i;
            count++;
        }
        if(count==2&&k[i]=='%')
        {
            countastyle5=i;
            count++;
        }
        if(count==1&&k[i]=='$')
        {
            countpmd4=i;
            count++;
        }
        if(count==0&&k[i]=='%')
        {
            countpmd5=i;
            count++;
        }

    }



    return countpmd5;
}
int getpmdend()
{
    QString path;
    QDir dir;
    path=dir.currentPath();
    QString fullpath=path+"/toolbox.cfg";
    string t=path.toStdString();
//    cout<<t<<"\n";
    QString a;
    QFile *file=new QFile(fullpath);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    a=QString(file->readAll());

    string b=a.toStdString();


    const char *k = b.c_str();

    int count=0;
    int countpmd5=0;
    int countpmd4=0;
    int countastyle5=0;
    int countastyle4=0;
    int countcppcheck5=0;
    int countcppcheck4=0;

    for(int i=0; i<1024; i++)
    {

        if(count==5&&k[i]=='$')
        {
            countcppcheck4=i;
            count++;
        }
        if(count==4&&k[i]=='%')
        {
            countcppcheck5=i;
            count++;
        }
        if(count==3&&k[i]=='$')
        {
            countastyle4=i;
            count++;
        }
        if(count==2&&k[i]=='%')
        {
            countastyle5=i;
            count++;
        }
        if(count==1&&k[i]=='$')
        {
            countpmd4=i;
            count++;
        }
        if(count==0&&k[i]=='%')
        {
            countpmd5=i;
            count++;
        }

    }



    return countpmd4;
}

int getAStylebegin()
{
    QString path;
    QDir dir;
    path=dir.currentPath();
    QString fullpath=path+"/toolbox.cfg";
    string t=path.toStdString();
//    cout<<t<<"\n";
    QString a;
    QFile *file=new QFile(fullpath);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    a=QString(file->readAll());

    string b=a.toStdString();


    const char *k = b.c_str();

    int count=0;
    int countpmd5=0;
    int countpmd4=0;
    int countastyle5=0;
    int countastyle4=0;
    int countcppcheck5=0;
    int countcppcheck4=0;

    for(int i=0; i<1024; i++)
    {

        if(count==5&&k[i]=='$')
        {
            countcppcheck4=i;
            count++;
        }
        if(count==4&&k[i]=='%')
        {
            countcppcheck5=i;
            count++;
        }
        if(count==3&&k[i]=='$')
        {
            countastyle4=i;
            count++;
        }
        if(count==2&&k[i]=='%')
        {
            countastyle5=i;
            count++;
        }
        if(count==1&&k[i]=='$')
        {
            countpmd4=i;
            count++;
        }
        if(count==0&&k[i]=='%')
        {
            countpmd5=i;
            count++;
        }

    }



    return countastyle5;
}
int getAStyleend()
{
    QString path;
    QDir dir;
    path=dir.currentPath();
    QString fullpath=path+"/toolbox.cfg";
    string t=path.toStdString();
//    cout<<t<<"\n";
    QString a;
    QFile *file=new QFile(fullpath);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    a=QString(file->readAll());

    string b=a.toStdString();


    const char *k = b.c_str();

    int count=0;
    int countpmd5=0;
    int countpmd4=0;
    int countastyle5=0;
    int countastyle4=0;
    int countcppcheck5=0;
    int countcppcheck4=0;

    for(int i=0; i<1024; i++)
    {

        if(count==5&&k[i]=='$')
        {
            countcppcheck4=i;
            count++;
        }
        if(count==4&&k[i]=='%')
        {
            countcppcheck5=i;
            count++;
        }
        if(count==3&&k[i]=='$')
        {
            countastyle4=i;
            count++;
        }
        if(count==2&&k[i]=='%')
        {
            countastyle5=i;
            count++;
        }
        if(count==1&&k[i]=='$')
        {
            countpmd4=i;
            count++;
        }
        if(count==0&&k[i]=='%')
        {
            countpmd5=i;
            count++;
        }

    }



    return countastyle4;
}

int getcppcheckbegin()
{
    QString path;
    QDir dir;
    path=dir.currentPath();
    QString fullpath=path+"/toolbox.cfg";
    string t=path.toStdString();
//    cout<<t<<"\n";
    QString a;
    QFile *file=new QFile(fullpath);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    a=QString(file->readAll());
    //printf("%s\n",a.data());
    string b=a.toStdString();


    const char *k = b.c_str();

    int count=0;
    int countpmd5=0;
    int countpmd4=0;
    int countastyle5=0;
    int countastyle4=0;

    int countcppcheck5=0;
    int countcppcheck4=0;

    for(int i=0; i<1024; i++)
    {

        if(count==5&&k[i]=='$')
        {
            countcppcheck4=i;
            count++;
        }
        if(count==4&&k[i]=='%')
        {
            countcppcheck5=i;
            count++;
        }
        if(count==3&&k[i]=='$')
        {
            countastyle4=i;
            count++;
        }
        if(count==2&&k[i]=='%')
        {
            countastyle5=i;
            count++;
        }
        if(count==1&&k[i]=='$')
        {
            countpmd4=i;
            count++;
        }
        if(count==0&&k[i]=='%')
        {
            countpmd5=i;
            count++;
        }

    }



    return countcppcheck5;
}

int getcppcheckend()
{
    QString path;
    QDir dir;
    path=dir.currentPath();
    QString fullpath=path+"/toolbox.cfg";
    string t=path.toStdString();
//    cout<<t<<"\n";
    QString a;
    QFile *file=new QFile(fullpath);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    a=QString(file->readAll());

    string b=a.toStdString();


    const char *k = b.c_str();

    int count=0;
    int countpmd5=0;
    int countpmd4=0;
    int countastyle5=0;
    int countastyle4=0;

    int countcppcheck5=0;
    int countcppcheck4=0;

    for(int i=0; i<1024; i++)
    {

        if(count==5&&k[i]=='$')
        {
            countcppcheck4=i;
            count++;
        }
        if(count==4&&k[i]=='%')
        {
            countcppcheck5=i;
            count++;
        }
        if(count==3&&k[i]=='$')
        {
            countastyle4=i;
            count++;
        }
        if(count==2&&k[i]=='%')
        {
            countastyle5=i;
            count++;
        }
        if(count==1&&k[i]=='$')
        {
            countpmd4=i;
            count++;
        }
        if(count==0&&k[i]=='%')
        {
            countpmd5=i;
            count++;
        }

    }



    return countcppcheck4;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(QStringLiteral(":/images/draft.png")));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::pmd_clicked()
{
    QString path;
    QDir dir;
    path=dir.currentPath();
    QString fullpath=path+"/toolbox.cfg";
    string t=path.toStdString();
//    cout<<t<<"\n";
    QString a;
    QFile *file=new QFile(fullpath);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    a=QString(file->readAll());

    string b=a.toStdString();
    char* p =const_cast<char*>(b.c_str());

    int countpmd4=getpmdend();
    int countpmd5=getpmdbegin();

    char pmd[countpmd4-countpmd5-1];
    strncpy(pmd, p+1+countpmd5, countpmd4-countpmd5-1);

    QProcess::startDetached(pmd,QStringList());
}

void MainWindow::AStyle_clicked()
{

    QString path;
    QDir dir;
    path=dir.currentPath();
    QString fullpath=path+"/toolbox.cfg";
    string t=path.toStdString();
//    cout<<t<<"\n";
    QString a;
    QFile *file=new QFile(fullpath);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    a=QString(file->readAll());

    string b=a.toStdString();
    char* p =const_cast<char*>(b.c_str());

    int countastyle4=getAStyleend();
    int countastyle5=getAStylebegin();

    char astyle[countastyle4-countastyle5];
    strncpy(astyle, p+1+countastyle5, countastyle4-countastyle5-1);
    astyle[countastyle4-countastyle5-1]='\0';

    QString qastyle= QString(QLatin1String(astyle));

    QString fulloutput=path+"/output.txt";

    QString location_input = ui->locationLineEdit->text();
    QString type_input = ui->typeLineEdit->text();
    QString command = qastyle+" "+type_input+" "+location_input+">"+fulloutput;
    ui->outLineEdit->setText(command);
    QProcess e(0);
    e.start("cmd", QStringList()<<"/c"<<command);
    e.waitForStarted();
    e.waitForFinished();
    qDebug()<<QString::fromLocal8Bit(e.readAllStandardOutput());

}

void MainWindow::cppCheck_clicked()
{

    QString path;
    QDir dir;
    path=dir.currentPath();
    QString fullpath=path+"/toolbox.cfg";
    string t=path.toStdString();
//    cout<<t<<"\n";
    QString a;
    QFile *file=new QFile(fullpath);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    a=QString(file->readAll());

    string b=a.toStdString();
    char* p =const_cast<char*>(b.c_str());

    int countcppcheck4=getcppcheckend();
    int countcppcheck5=getcppcheckbegin();

    char cppcheck[countcppcheck4-countcppcheck5-1];
    strncpy(cppcheck, p+1+countcppcheck5, countcppcheck4-countcppcheck5-1);

    QProcess::startDetached(cppcheck, QStringList());
}

