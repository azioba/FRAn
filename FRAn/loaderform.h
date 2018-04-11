#ifndef LOADERFORM_H
#define LOADERFORM_H

#include <QDialog>
#include <QTableWidget>
#include "ui_loaderform.h"

class LoaderForm : public QDialog
{
	Q_OBJECT

public:
	LoaderForm(QDialog *parent = 0);
	~LoaderForm();

private:
	Ui::LoaderForm ui;
	//QPushButton *openfile = nullptr ;
	//QPushButton *loadfile = nullptr;

private slots:
	void openPath();
	void loadFile();
};



#endif // LOADERFORM_H
