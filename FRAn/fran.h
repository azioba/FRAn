#pragma once

#include <QtWidgets/QMainWindow>
#include "loaderform.h"
#include "clusteranalysis.h"
#include "Converter.h"
#include "DataType.h"

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

private:
	Ui::FRAnClass *_ui = nullptr;
	LoaderForm *loaderform = nullptr;
	ClusterAnalysis *clusteranalysis = nullptr;

	std::vector<euNorm> _inputData;
	std::vector<usNorm> _outputData;

	
private slots:
	void openLoader();
	void convertFile();
	void clustering();
	void onLoaderFormAccepted();
};





