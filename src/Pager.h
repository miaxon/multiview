/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pager.h
 * Author: alexcon
 *
 * Created on June 21, 2017, 12:52 PM
 */

#ifndef PAGER_H
#define PAGER_H

#include <QtCore>
#include <QMap>
#include "libui.h"
using namespace libui;
class Pager {
public:
    Pager();
    virtual ~Pager();
    BasePage* page(const QString& name) const;
    BasePage* currentPage;
private:
    QMap<QString, BasePage*> pages;
    void insert(BasePage *page);
};

#endif /* PAGER_H */

