/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StartPage.h
 * Author: alexcon
 *
 * Created on June 21, 2017, 1:02 PM
 */

#ifndef _STARTPAGE_H
#define _STARTPAGE_H
#include "libui.h"
#include "ui_StartPage.h"
#define START_PAGE "StartPage"

namespace libui {

    class StartPage : public BasePage {
        Q_OBJECT
    public:
        StartPage();
        virtual ~StartPage();
    private:
        Ui::StartPage ui;
    };
}
#endif /* _STARTPAGE_H */
