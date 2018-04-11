#include "loaderform.h"
#include <QFileDialog>
#include <QMessageBox>
#include "DataType.h"
#include <fstream>
#include <sstream>
#include <QDebug>
#include "Converter.h"


LoaderForm::LoaderForm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//openfile = new QPushButton;
	//loadfile = new QPushButton;

	connect(ui.OpenButton, SIGNAL(clicked()), this, SLOT(openPath()));
	connect(ui.OkButton, SIGNAL(clicked()), this, SLOT(loadFile()));
}

void LoaderForm::openPath()
{
	euNorm data;
	QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "C:\Users\lucil\Documents\Visual Studio 2015\Projects\FRAn", "text File(*.txt);; All Files (*.*)");
	ui.Path->setText(filename);

	std::vector<euNorm> inputData;
	std::ifstream fichier(filename.toStdString());
	if (fichier)
	{
		std::string ligne;
		while (getline(fichier, ligne))
		{
			std::stringstream stream(ligne);
			//euNorm data;
			stream >> data.az >> data.dip >> data.dipAz;
			qDebug() << data.az << " " << data.dip << " " << data.dipAz.data();
			inputData.push_back(data);
		}
	}
	else
	{
		qDebug() << "erreur";
	}

	//TODO finir d'implementer le code de lecture et de remplissage du tableau

	//QTableWidgetItem *m_data;
	
	int columnSize;
	ui.Preview->setRowCount(inputData.size()); 
	columnSize = 3;
	ui.Preview->setColumnCount(columnSize);

	//ui.Preview->setItem(inputData.size(), 3, m_data);

	QStringList m_header;
	m_header << "Azimuth" << "Dip" << "Dip Azimuth";
	ui.Preview->setHorizontalHeaderLabels(m_header);
	ui.Preview->setShowGrid(false);
	ui.Preview->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeMode::Stretch);
	ui.Preview->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeMode::Stretch);
	ui.Preview->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeMode::Stretch);

	for (int i = 0; i < inputData.size(); i++) 
	{
		ui.Preview->setItem(i, 0, new QTableWidgetItem(QString::number(inputData[i].az)));
		ui.Preview->setItem(i, 1, new QTableWidgetItem(QString::number(inputData[i].dip)));
		ui.Preview->setItem(i, 2, new QTableWidgetItem(inputData[i].dipAz.data()));		
	}
	

	
}

void LoaderForm::loadFile()
{

}

LoaderForm::~LoaderForm()
{

}


