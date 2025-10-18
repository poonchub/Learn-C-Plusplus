#ifndef MAINWINDOW_H
#pragma once
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>

class MainWindow : public QMainWindow
{

Q_OBJECT

private:
    QPushButton *button;
    QLabel *label;

private slots:
    /* data */
    void onButtonClicked(); 
    
public:
    ~MainWindow();  

    explicit MainWindow(QWidget *parent = nullptr);
};

#endif