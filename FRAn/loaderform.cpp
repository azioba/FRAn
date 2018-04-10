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

	
}

void LoaderForm::loadFile()
{

}

LoaderForm::~LoaderForm()
{

}


