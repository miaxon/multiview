/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   StartPage.cpp
 * Author: alexcon
 *
 * Created on June 21, 2017, 1:02 PM
 */

#include "StartPage.h"
using namespace libui;
StartPage::StartPage()
{
    ui.setupUi(this);
    this->m_name = START_PAGE;   
}

StartPage::~StartPage()
{
}
