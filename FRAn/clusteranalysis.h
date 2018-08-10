#pragma once

#include <QDialog>
#include "ui_clusteranalysis.h"

class ClusterAnalysis : public QDialog {
	Q_OBJECT

public:
	ClusterAnalysis(QDialog * parent = 0);
	~ClusterAnalysis();

private:
	Ui::ClusterAnalysis *_ui = nullptr;
	QCPBars *_histo = nullptr;
	QCPGraph *_rosace = nullptr;
	QCPGraph *_xplot = nullptr;
	QCPGraph *_stereo = nullptr;
	
};
