#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "ui_mainwindow.h"
#include<fstream>
#include<iostream>
using namespace std;
#include <vector>
#include<string>






namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void pmd_clicked();

    void AStyle_clicked();

    void cppCheck_clicked();

private:
    Ui::MainWindow* ui;


protected:

};



#endif // MAINWINDOW_H
