/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UsersPage.h
 * Author: alexcon
 *
 * Created on June 21, 2017, 2:10 PM
 */

#ifndef _USERSPAGE_H
#define _USERSPAGE_H

#include "ui_UsersPage.h"
#include "BasePage.h"
#define USERS_PAGE "UsersPage"
namespace libui {

    class UsersPage : public BasePage {
        Q_OBJECT
    public:
        UsersPage();
        virtual ~UsersPage();
    private:
        Ui::UsersPage ui;
    };
}
#endif /* _USERSPAGE_H */
