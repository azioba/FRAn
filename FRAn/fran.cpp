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
	_histo = new QCPBars(_ui->_histo->xAxis, _ui->_histo->yAxis);
	_cercle = new QCPCurve(_ui->Plot->xAxis, _ui->Plot->yAxis);
	_graph = new QCPGraph(_ui->Plot->xAxis, _ui->Plot->yAxis);

	// _histogramm///////////////////////////////////////////////////////
	_ui->_histo->xAxis->setRange(0, 180);
	_ui->_histo->xAxis->setLabel("Azimuth");
	_ui->_histo->yAxis->setRange(0, 1);
	_ui->_histo->yAxis->setLabel("Count");

	// _cercle////////////////////////////////////////////////////////////
	_ui->Plot->xAxis->setRange(0, 1);
	//_ui->Plot->xAxis->setLabel("Spacing");
	_ui->Plot->yAxis->setRange(0, 1);
	//_ui->Plot->yAxis->setLabel("Count");

	// graph //////////////////////////////////////////////////////////
	_ui->Plot->xAxis2->setRange(0, 1);
	_ui->Plot->yAxis2->setRange(0, 1);
	_ui->Plot->xAxis2->setVisible(true);


	const int pointCount = 360;
	int rayon = 90;
	QVector<QCPCurveData> _cercle1(pointCount);
	for (int i = 0; i < pointCount; ++i)
	{
		double phi = (i / (double)(pointCount)) * 2 * M_PI;
		_cercle1[i] = QCPCurveData(i, rayon*qCos(phi), rayon*qSin(phi));
	}
	// pass the data to the curves; we know t (i in loop above) is ascending, so set alreadySorted=true (saves an extra internal sort):
	_cercle->data()->set(_cercle1, true);
	// color the curves:
	_cercle->setPen(QPen(Qt::blue));
	//_cercle->setBrush(QBrush(QColor(0, 0, 255, 20)));
	// set some basic customPlot config:
	_ui->Plot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
	_ui->Plot->axisRect()->setupFullAxesBox();
	_ui->Plot->rescaleAxes();
	
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
	m_header  << "Dip Direction" << "Dip";
	_ui->convertedData->setHorizontalHeaderLabels(m_header);
	_ui->convertedData->setShowGrid(false);
	_ui->convertedData->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeMode::Stretch);
	_ui->convertedData->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeMode::Stretch);

	for (int i = 0; i < outputData.size(); i++)
	{
		_ui->convertedData->setItem(i, 0, new QTableWidgetItem(QString::number(outputData[i].dipDir)));
		_ui->convertedData->setItem(i, 1, new QTableWidgetItem(QString::number(outputData[i].dip)));		
	}
}

void FRAn::plotting()
{
	// _histogram //////////////////////////////////////////////////
	_inputData = loaderform->getInputData();
	QVector<int> h(181, 0);
	for (auto xData : _inputData)
	{
		h[int(xData.az)] += 1;
	}

	for (int i = 0, stop = h.count(); i < stop; ++i)
	{
		_histo->addData(i, h[i]);
	}

	_histo->rescaleAxes();
	_ui->_histo->replot();

	// _cercle //////////////////////////////////////////////////
	_outputData = FRAn::getOuputData();
	
	_graph->addData(10, 10);
	_graph->addData(10, 20);
	_graph->addData(-10, 20);
	_graph->addData(-10, -20);
	_graph->addData(80, 10);
	_graph->setLineStyle(QCPGraph::lsNone);
	_graph->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 5));
	_ui->Plot->replot();
	
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



