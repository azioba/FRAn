#include "fran.h"
#include "loaderform.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FRAn w;
	w.show();
	return a.exec();
}
