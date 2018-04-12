#include "fran.h"
#include "loaderform.h"

FRAn::FRAn(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	loaderform = new LoaderForm;
	clusteranalysis = new ClusterAnalysis;

	connect(ui.actionOpen_file_s, SIGNAL(triggered()), this, SLOT(openLoader()));
	connect(ui.convertButton, SIGNAL(clicked()), this, SLOT(convertFile()));
	connect(ui.clusterButton, SIGNAL(clicked()), this, SLOT(clustering()));
}

void FRAn::openLoader()
{
	loaderform->show();
}

void FRAn::convertFile()
{
}

void FRAn::clustering()
{
	clusteranalysis->show();
}


FRAn::~FRAn()
{
	delete loaderform;
	delete clusteranalysis;
}



