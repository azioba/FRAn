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
	histo = new QCPBars(_ui->Histo->xAxis, _ui->Histo->yAxis);
	_ui->Histo->xAxis->setRange(0, 180);
	_ui->Histo->xAxis->setLabel("Azimuth");
	_ui->Histo->yAxis->setRange(0, 1);
	_ui->Histo->yAxis->setLabel("Count");
	
	connect(_ui->actionOpen_file_s, SIGNAL(triggered()), this, SLOT(openLoader()));
	connect(_ui->convertButton, SIGNAL(clicked()), this, SLOT(convertFile()));
	connect(_ui->clusterButton, SIGNAL(clicked()), this, SLOT(clustering()));
	connect(_ui->plotButton, SIGNAL(clicked()), this, SLOT(plotting()));
	connect(_ui->exportButton, SIGNAL(clicked()), this, SLOT(exporting()));
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

	_ui->convertedData->setRowCount(outputData.size());
	_ui->convertedData->setColumnCount(2);
	QStringList m_header;
	m_header << "Dip" << "Dip Direction";
	_ui->convertedData->setHorizontalHeaderLabels(m_header);
	_ui->convertedData->setShowGrid(false);
	_ui->convertedData->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeMode::Stretch);
	_ui->convertedData->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeMode::Stretch);

	for (int i = 0; i < outputData.size(); i++)
	{
		_ui->convertedData->setItem(i, 0, new QTableWidgetItem(QString::number(outputData[i].dip)));
		_ui->convertedData->setItem(i, 1, new QTableWidgetItem(QString::number(outputData[i].dipDir)));		
	}
}

void FRAn::plotting()
{
	_inputData = loaderform->getInputData();
	QVector<int> h(181, 0);
	for (auto xData : _inputData)
	{
		h[int(xData.az)] += 1;
	}

	for (int i = 0, stop = h.count(); i < stop; ++i)
	{
		histo->addData(i, h[i]);
	}

	histo->rescaleAxes();
	_ui->Histo->replot();
}

void FRAn::exporting()
{

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

	
	//auto originalData = loaderform->getQTableWidget();
	_ui->originalData->setRowCount(_inputData.size());	
	_ui->originalData->setColumnCount(3);
	QStringList m_header;
	m_header << "Azimuth" << "Dip" << "Dip Azimuth";
	_ui->originalData->setHorizontalHeaderLabels(m_header);
	_ui->originalData->setShowGrid(false);
	_ui->originalData->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeMode::Stretch);
	_ui->originalData->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeMode::Stretch);
	_ui->originalData->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeMode::Stretch);

	for (int i = 0; i < _inputData.size(); i++)
	{
		_ui->originalData->setItem(i, 0, new QTableWidgetItem(QString::number(_inputData[i].az)));
		_ui->originalData->setItem(i, 1, new QTableWidgetItem(QString::number(_inputData[i].dip)));
		_ui->originalData->setItem(i, 2, new QTableWidgetItem(_inputData[i].dipAz.data()));
	}
}




FRAn::~FRAn()
{
	delete loaderform;
	delete clusteranalysis;
}



