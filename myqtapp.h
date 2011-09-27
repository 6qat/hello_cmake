#ifndef MYQTAPP_H
#define MYQTAPP_H
 
#include "ui_myqtapp.h"
 
 
class myQtApp : public QWidget, private Ui::myQtAppDLG
{
    Q_OBJECT
 
public:
    myQtApp(QWidget *parent = 0);
 
 
public slots:
    void getPath();
    void doSomething();
    void clear();
    void about();
};
 
 
#endif