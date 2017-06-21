/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BasePage.h
 * Author: alexcon
 *
 * Created on June 21, 2017, 10:38 AM
 */

#ifndef _BASEPAGE_H
#define _BASEPAGE_H

#include <QDebug>
#include "ui_BasePage.h"

namespace libui {

    class BasePage : public QWidget {
        Q_OBJECT
    public:
        BasePage();
        virtual ~BasePage();
        QString name();

        virtual void beforeUp() {
        };

        virtual void beforeDown() {
        };

    protected:
        QString m_name;
    private:
        Ui::BasePage ui;

    };
}
#endif /* _BASEPAGE_H */
