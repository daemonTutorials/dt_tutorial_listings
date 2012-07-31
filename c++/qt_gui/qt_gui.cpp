/*
 * Title: QT4 GUI Example
 * Author: Maik
 * Date: 2011/29/12
 * G++ Command Line: qmake; make
 * depends=('/c++/std_lib_facilites.h')
 */ 
 
#include "std_lib_facilities.h"
#include <QtGui>

int main(int argv, char **args)
{
    QApplication app(argv, args);
    
    //QLabel *label = new QLabel(QApplication::translate("windowlayout", "Name:"));
    //QLineEdit *lineEdit = new QLineEdit();
    
    QLabel label("Name:");
    QLineEdit lineEdit;
    QPushButton quitButton("Quit");
    
    QObject::connect(&quitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    QVBoxLayout layout;
    layout.addWidget(&label);
    layout.addWidget(&lineEdit);
    layout.addWidget(&quitButton);
    
    QWidget window;
    window.setLayout(&layout);
    window.setWindowTitle("Test");
    window.show();
    
    return app.exec();
}
