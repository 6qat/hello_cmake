#include <QApplication>
 
#include "myqtapp.h"
#include <mylib.h>
 
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    myQtApp *dialog = new myQtApp;

	soma(1,4);
 
    dialog->show();
	return app.exec();
	
}