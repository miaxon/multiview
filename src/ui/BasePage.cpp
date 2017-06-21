/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   BasePage.cpp
 * Author: alexcon
 *
 * Created on June 21, 2017, 10:38 AM
 */

#include "BasePage.h"
using namespace libui;

BasePage::BasePage()
{
    ui.setupUi(this);
    
}

BasePage::~BasePage()
{
}
QString BasePage::name(){
    return m_name;
}