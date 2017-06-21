/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MainWindow.h
 * Author: alexcon
 *
 * Created on June 21, 2017, 12:04 PM
 */

#ifndef _MAINWINDOW_H
#define _MAINWINDOW_H

#include "ui_MainWindow.h"
#include <QDebug>

#include "Pager.h"
class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow();
    virtual ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    Pager pager;
    void setPage(const QString& name);
    void bindPageMenu();
private slots:
    void menuAction(QAction* action);
    
    
};

#endif /* _MAINWINDOW_H */
