/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: alexcon
 *
 * Created on June 21, 2017, 10:32 AM
 */

#include <QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    // create and show your widgets here
    MainWindow w;
    w.show();
    return app.exec();
}
