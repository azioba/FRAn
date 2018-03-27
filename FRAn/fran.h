#ifndef FRAN_H
#define FRAN_H

#include <QtWidgets/QMainWindow>
#include "ui_fran.h"
#include "ui_loaderform.h"
#include "loaderform.h"

class FRAn : public QMainWindow
{
	Q_OBJECT

public:
	FRAn(QWidget *parent = 0);
	~FRAn();

private:
	Ui::FRAnClass ui;
	LoaderForm *loaderform = nullptr;
	
private slots:
	void openLoader();
};




#endif // FRAN_H
