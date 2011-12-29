/*
 * Title: QT4 GUI Example
 * Author: Maik
 */ 
 
#include "../std_lib_facilites.h"
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
    window.setWindowTitle(QApplication::translate("toplevel", "Top-Level Widget"));
    window.show();
    
    return app.exec();
}
