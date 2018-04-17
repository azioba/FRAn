#include "fran.h"

#include "ui_fran.h"
#include "ui_loaderform.h"
#include "ui_clusteranalysis.h"


FRAn::FRAn(QWidget *parent)
	: QMainWindow(parent)
{
	_ui = new Ui::FRAnClass;
	_ui->setupUi(this);

	loaderform = new LoaderForm;
	clusteranalysis = new ClusterAnalysis;

	connect(_ui->actionOpen_file_s, SIGNAL(triggered()), this, SLOT(openLoader()));
	connect(_ui->convertButton, SIGNAL(clicked()), this, SLOT(convertFile()));
	connect(_ui->clusterButton, SIGNAL(clicked()), this, SLOT(clustering()));
	connect(loaderform, SIGNAL(accepted()), this, SLOT(onLoaderFormAccepted()));
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


void FRAn::onLoaderFormAccepted()
{
	std::vector<euNorm> _inputData = loaderform->getInputData();
}


FRAn::~FRAn()
{
	delete loaderform;
	delete clusteranalysis;
}



