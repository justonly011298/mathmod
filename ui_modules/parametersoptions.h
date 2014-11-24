/***************************************************************************
 *   Copyright (C) 2014 by Abderrahman Taha                                *
 *                                                                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA            *
 ***************************************************************************/

#ifndef PARAMETERSOPTIONS_H
#define PARAMETERSOPTIONS_H

#include "ui_parametersoptions.h"
#include "../json_parser/parisodef.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QJsonObject>
#include <QStyleFactory>


class Parametersoptions: public QWidget
{
    Q_OBJECT

public:
    Parametersoptions(QWidget *parent = 0);
    QString fullpath;
    QString filecollection;
    QString fileconfig;
    QJsonObject JConfig, Collection, IsoParam;
    QPalette mypalette, mypalette2, darkpalette;
    QApplication * MainApp;
    int ControlX;
    int ControlY;
    int GlwinX;
    int GlwinY;
    int ControlW;
    int ControlH;
    int GlwinW;
    int GlwinH;
    int MaxTri, MaxPt, MaxGrid;

public slots:
    void ReadJsonFile(QString, QJsonObject &);
    void SetStyleAndTheme(QApplication &, QString, QString);
    void slot_about_clicked();
    void GuiUpdate();
    void on_maxgri_valueChanged(int value);
    void on_maxtri_valueChanged(int value);
    void on_maxpt_valueChanged(int value);
    void on_loadconfig_clicked();
    void on_save_clicked();
    void LoadConfig(QApplication &,int argc, char *argv[]);
    QStringList LoadCollectionModels(QJsonObject &JIso, jpariso &Jcollection, int argc);

private slots:
    void on_comboBox_2_activated(const QString &arg1);

    void on_comboBox_3_activated(const QString &arg1);

    void on_comboBox_activated(const QString &arg1);

    void on_red_2_valueChanged(int value);

    void on_green_2_valueChanged(int value);

    void on_blue_2_valueChanged(int value);

    void on_TestConfig_clicked();

private:
    Ui::Parametersoptions ui;
};

#endif