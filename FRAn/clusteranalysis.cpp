#include "clusteranalysis.h"
#include "loaderform.h"
#include <QFileDialog>
#include <QMessageBox>
#include "DataType.h"
#include <fstream>
#include <sstream>
#include <QDebug>


ClusterAnalysis::ClusterAnalysis(QDialog * parent) 
	: QDialog(parent) 
{
	_ui = new Ui::ClusterAnalysis;
	_ui->setupUi(this);

	_stereo = new QCPGraph(_ui->widget_Stereo->xAxis, _ui->widget_Stereo->yAxis);
	_rosace = new QCPGraph(_ui->widget_Rosace->xAxis, _ui->widget_Rosace->yAxis);
	_histo = new QCPBars(_ui->widget_Histo->xAxis, _ui->widget_Histo->yAxis);
	_xplot = new QCPGraph(_ui->widget_Xplot->xAxis, _ui->widget_Xplot->yAxis);
	
}

ClusterAnalysis::~ClusterAnalysis() 
{
	
}
