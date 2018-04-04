#ifndef LOADERFORM_H
#define LOADERFORM_H

#include <QWidget>
#include "ui_loaderform.h"

class LoaderForm : public QWidget
{
	Q_OBJECT

public:
	LoaderForm(QWidget *parent = 0);
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
