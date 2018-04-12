#ifndef FRAN_H
#define FRAN_H

#include <QtWidgets/QMainWindow>
#include "ui_fran.h"
#include "ui_loaderform.h"
#include "ui_clusteranalysis.h"
#include "loaderform.h"
#include "clusteranalysis.h"


class FRAn : public QMainWindow
{
	Q_OBJECT

public:
	FRAn(QWidget *parent = 0);
	~FRAn();

private:
	Ui::FRAnClass ui;
	LoaderForm *loaderform = nullptr;
	ClusterAnalysis *clusteranalysis = nullptr;
	
private slots:
	void openLoader();
	void convertFile();
	void clustering();
};




#endif // FRAN_H
