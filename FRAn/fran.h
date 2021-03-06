#pragma once

#include <QtWidgets/QMainWindow>
#include <QVector>
#include "loaderform.h"
#include "clusteranalysis.h"
#include "Converter.h"
#include "DataType.h"
#include "qcustomplot.h"


namespace Ui
{
	class FRAnClass;
}

class FRAn : public QMainWindow
{
	Q_OBJECT

public:
	FRAn(QWidget *parent = 0);
	~FRAn();

	const std::vector<usNorm>& getOuputData() const
	{
		return _outputData;
	}


private:
	Ui::FRAnClass *_ui = nullptr;
	LoaderForm *loaderform = nullptr;
	ClusterAnalysis *clusteranalysis = nullptr;
	QCPBars *_histo = nullptr;
	QCPCurve *_cercle = nullptr;
	QCPGraph *_graph = nullptr;

	std::vector<euNorm> _inputData;
	std::vector<usNorm> _outputData;

	
private slots:
	void openLoader();
	void convertFile();
	void clustering();
	void onLoaderFormAccepted();
	void plotting();
	void exporting();
};





