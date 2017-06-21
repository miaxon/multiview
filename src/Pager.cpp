/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pager.cpp
 * Author: alexcon
 * 
 * Created on June 21, 2017, 12:52 PM
 */

#include "Pager.h"

Pager::Pager():currentPage(nullptr)
{    
    insert(new StartPage);
    insert(new UsersPage);
    insert(new GroupsPage);
}

void Pager::insert(BasePage *page)
{
    pages.insert(page->name(), page);
}

BasePage* Pager::page(const QString& name) const
{    
    return pages.value(name);
}

Pager::~Pager()
{
    qDeleteAll(pages.begin(), pages.end());
}

