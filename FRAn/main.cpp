#include "fran.h"
#include "loaderform.h"
#include "Converter.h"
#include <QtWidgets/QApplication>
#include <qdebug.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FRAn w;
	w.show();
	return a.exec();
}
