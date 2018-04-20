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
	Converter converter(_inputData);
	converter.convertToUsNorm();

	auto outputData = converter.getOutputData();
	for (auto test : outputData)
	{
		qDebug() << QString::number(test.dip) << QString::number(test.dipDir);
	}
}

void FRAn::clustering()
{
	clusteranalysis->show();
}


void FRAn::onLoaderFormAccepted()
{
	_inputData = loaderform->getInputData();
	for (auto test : _inputData)
	{
		qDebug() << QString::number(test.az) << QString::number(test.dip) << QString::fromStdString(test.dipAz);
	}

	auto preview = loaderform->getQTableWidget();
}


FRAn::~FRAn()
{
	delete loaderform;
	delete clusteranalysis;
}



