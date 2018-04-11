#include "loaderform.h"
#include <QFileDialog>
#include <QMessageBox>
#include "DataType.h"
#include <fstream>
#include <sstream>
#include <QDebug>
#include "Converter.h"


LoaderForm::LoaderForm(QDialog *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//openfile = new QPushButton;
	//loadfile = new QPushButton;

	connect(ui.OpenButton, SIGNAL(clicked()), this, SLOT(openPath()));
	connect(ui.OkButton, SIGNAL(clicked()), this, SLOT(loadFile()));
	connect(ui.CancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}

void LoaderForm::openPath()
{
	int rowCount=0;
	int columnCount=0;
	euNorm data;
	QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "C:\Users\lucil\Documents\Visual Studio 2015\Projects\FRAn", "text File(*.txt);; All Files (*.*)");
	ui.Path->setText(filename);

	std::vector<euNorm> inputData;
	std::ifstream fichier(filename.toStdString());
	if (fichier)
	{
		std::string ligne;

		//stream on the first line to retrieve the number of column needed for the QTableWidget
		getline(fichier, ligne);
		std::istringstream column(ligne);
		std::string wordsInHeader;
		while (getline(column, wordsInHeader, ' '))
			++columnCount;
	
		
		
		// stream on the file from the second line and filling the table
		while (getline(fichier, ligne))
		{
			std::stringstream stream(ligne);
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
	
	//set the number of rows to the size  of the file
	ui.Preview->setRowCount(inputData.size()); 
	//set the number of columns from the column count retrieved from getline
	ui.Preview->setColumnCount(columnCount);

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


