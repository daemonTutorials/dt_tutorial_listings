/*
 * Title: QT4 GUI Example
 * Author: Maik
 * Date: 2011/29/12
 * G++ Command Line: qmake; make
 * depends=('/c++/std_lib_facilites.h')
 */ 
 
#include "std_lib_facilities.h"
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;
    QLabel *label = new QLabel(QApplication::translate("windowlayout", "Name:"));
    QLineEdit *lineEdit = new QLineEdit();

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(label);
    layout->addWidget(lineEdit);
    
    window.setLayout(layout);
    window.setWindowTitle(QApplication::translate("toplevel", "MyWidget"));
    window.show();
    
    return app.exec();
}
