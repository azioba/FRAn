#include "loaderform.h"


LoaderForm::LoaderForm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	openfile = new QPushButton;

	connect(ui.OpenButton, SIGNAL(triggered()), this, SLOT(openPath()));
}

void LoaderForm::openPath()
{

}

LoaderForm::~LoaderForm()
{

}
