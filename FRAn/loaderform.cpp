#include "loaderform.h"
#include "ui_loaderform.h"
#include <QFileDialog>
#include <QMessageBox>
#include <fstream>
#include <sstream>
#include <QDebug>




LoaderForm::LoaderForm(QDialog *parent)
	: QDialog(parent)
{
	_ui = new Ui::LoaderForm;
	_ui->setupUi(this);
	//openfile = new QPushButton;
	//loadfile = new QPushButton;

	connect(_ui->OpenButton, SIGNAL(clicked()), this, SLOT(openPath()));
	//connect(_ui.OkButton, SIGNAL(clicked()), this, SLOT(loadFile()));
	connect(_ui->OkButton, SIGNAL(clicked()), this, SLOT(accept()));
	connect(_ui->CancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}

void LoaderForm::openPath()
{
	int rowCount=0;
	int columnCount=0;
	//euNorm data;
	QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "C:\Users\lucil\Documents\Visual Studio 2015\Projects\FRAn", "text File(*.txt);; All Files (*.*)");
	_ui->Path->setText(filename);

	
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
			if (data.az > 180)
			{
				data.az = data.az - 180;
			}
			qDebug() << data.az << " " << data.dip << " " << data.dipAz.data();
			_inputData.push_back(data);
		}
	}
	else
	{
		qDebug() << "erreur";
	}

	//TODO finir d'implementer le code de lecture et de remplissage du tableau

	//QTableWidgetItem *m_data;
	
	//set the number of rows to the size  of the file
	_ui->Preview->setRowCount(_inputData.size()); 
	//set the number of columns from the column count retrieved from getline
	_ui->Preview->setColumnCount(columnCount);

	//ui.Preview->setItem(inputData.size(), 3, m_data);

	QStringList m_header;
	m_header << "Azimuth" << "Dip" << "Dip Azimuth";
	_ui->Preview->setHorizontalHeaderLabels(m_header);
	_ui->Preview->setShowGrid(false);
	_ui->Preview->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeMode::Stretch);
	_ui->Preview->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeMode::Stretch);
	_ui->Preview->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeMode::Stretch);

	for (int i = 0; i < _inputData.size(); i++) 
	{
		_ui->Preview->setItem(i, 0, new QTableWidgetItem(QString::number(_inputData[i].az)));
		_ui->Preview->setItem(i, 1, new QTableWidgetItem(QString::number(_inputData[i].dip)));
		_ui->Preview->setItem(i, 2, new QTableWidgetItem(_inputData[i].dipAz.data()));		
	}
	
	
	
}

void LoaderForm::loadFile()
{

}

LoaderForm::~LoaderForm()
{

}


