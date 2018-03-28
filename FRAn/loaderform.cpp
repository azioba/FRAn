#include "loaderform.h"
#include <QFileDialog>
#include <QMessageBox>


LoaderForm::LoaderForm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	openfile = new QPushButton;

	connect(ui.OpenButton, SIGNAL(clicked()), this, SLOT(openPath()));
}

void LoaderForm::openPath()
{
	QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "text File(*.txt);; All Files (*.*)");
	QMessageBox::information(this, tr("File Name"), filename );
}

LoaderForm::~LoaderForm()
{

}
