/**************************************************************************
**   corentin, 11/01/2017 2017

**This file is part of easy_converter.
**
**easy_converter is free software: you can redistribute it and/or modify
**it under the terms of the GNU General Public License as published by
**the Free Software Foundation, either version 3 of the License, or
**(at your option) any later version.
**
**easy_converter is distributed in the hope that it will be useful,
**but WITHOUT ANY WARRANTY; without even the implied warranty of
**MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**GNU General Public License for more details.
**
**You should have received a copy of the GNU General Public License
**along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
**************************************************************************/

#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QMainWindow>

namespace Ui {
class MainFrame;
}

class MainFrame : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainFrame(QWidget *parent = 0);
    ~MainFrame();

private:
    Ui::MainFrame *ui;
};

#endif // MAINFRAME_H
