#include <QApplication>
 
#include "myqtapp.h"
#include <mylib.h>
 
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    myQtApp *dialog = new myQtApp;

	soma(1,4);
	
	MinhaClasse c(3,7);
	int r = c.multiplica();
	qDebug() << r;

    dialog->show();
	return app.exec();
	
}
