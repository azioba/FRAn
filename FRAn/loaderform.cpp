#include "loaderform.h"
#include <QFileDialog>
#include <QMessageBox>
#include "DataType.h"
#include <fstream>
#include <sstream>
#include <QDebug>


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
			euNorm data;
			stream >> data.az >> data.dip >> data.dipAz;
			qDebug() << data.az << " " << data.dip << " " << data.dipAz.data();
			inputData.push_back(data);

		}

	}
	else
	{
		qDebug() << "erreur";
	}

	
	QTableWidgetItem *m_data=0;
	int columnSize;
	ui.Preview->setRowCount(inputData.size()); 
	columnSize = 3;
	ui.Preview->setColumnCount(columnSize);

	ui.Preview->setItem(inputData.size(), 3, m_data);

	QStringList m_header;
	m_header << "Azimuth" << "Dip" << "Dip Azimuth";
	ui.Preview->setHorizontalHeaderLabels(m_header);

	for (int i = 0; i < inputData.size(); i++) 
	{
		for (int j = 0; j < columnSize; j++)
		{
			//m_data->setText();
			ui.Preview->setItem(i, j, m_data);
		}
		
	}
	

	
}

void LoaderForm::loadFile()
{

}

LoaderForm::~LoaderForm()
{

}


