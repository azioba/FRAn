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
	ui.setupUi(this);
	
}

ClusterAnalysis::~ClusterAnalysis() {
	
}
