#include "fran.h"
#include "loaderform.h"

FRAn::FRAn(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	loaderform = new LoaderForm;

	connect(ui.actionOpen_file_s, SIGNAL(triggered()), this, SLOT(openLoader()));
	connect(ui.convertButton, SIGNAL(clicked()), this, SLOT(convertFile()));
}

void FRAn::openLoader()
{
	loaderform->show();
}

void FRAn::convertFile()
{
}


FRAn::~FRAn()
{
	delete loaderform;
}

