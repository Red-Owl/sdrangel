///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2018 Edouard Griffiths, F4EXB                                   //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#include <QObject>
#include <QString>

#include "itemsettinggui.h"

class DynamicItemSettingGUI : public QObject
{
    Q_OBJECT
public:
    DynamicItemSettingGUI(ItemSettingGUI *itemSettingGUI, const QString& name, QObject *parent = 0);
    ~DynamicItemSettingGUI();

    const QString& getName() const { return m_name; }
    double getValue() const { return m_itemSettingGUI->getCurrentValue(); }

signals:
    void valueChanged(QString itemName, double value);

private slots:
    void processValueChanged(double value);

private:
    ItemSettingGUI *m_itemSettingGUI;
    QString m_name;
};