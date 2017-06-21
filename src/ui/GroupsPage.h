/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GroupsPage.h
 * Author: alexcon
 *
 * Created on June 22, 2017, 12:30 AM
 */

#ifndef _GROUPSPAGE_H
#define _GROUPSPAGE_H

#include "ui_GroupsPage.h"
#include "BasePage.h"
#define GROUPS_PAGE "GroupsPage"
namespace libui {

    class GroupsPage : public BasePage {
        Q_OBJECT
    public:
        GroupsPage();
        virtual ~GroupsPage();
    private:
        Ui::GroupsPage ui;
    };
}
#endif /* _GROUPSPAGE_H */
