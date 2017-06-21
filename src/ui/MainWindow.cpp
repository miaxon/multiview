/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   MainWindow.cpp
 * Author: alexcon
 *
 * Created on June 21, 2017, 12:04 PM
 */

#include "MainWindow.h"

MainWindow::MainWindow():ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bindPageMenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::bindPageMenu()
{
    ui->actionStartPage->setProperty(TARGET_PAGE, START_PAGE);
    ui->actionUsersPage->setProperty(TARGET_PAGE, USERS_PAGE);
}

void MainWindow::menuAction(QAction* action)
{
    QString targetPage = action->property(TARGET_PAGE).toString();
    setPage(targetPage);
}

void MainWindow::setPage(const QString& name)
{
    BasePage* page = pager.page(name);

    if (!page)
        return;

    if (ui->stackedWidget->currentWidget() == page)
        return;

    if (ui->stackedWidget->indexOf(page) < 0)
        ui->stackedWidget->addWidget(page);

    if (pager.currentPage)
        pager.currentPage->beforeDown();

    page->beforeUp();
    ui->stackedWidget->setCurrentWidget(page);
    pager.currentPage = page;
    this->setWindowTitle(page->name());
}