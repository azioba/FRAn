#include "fran.h"
#include "loaderform.h"

FRAn::FRAn(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	loaderform = new LoaderForm;

	connect(ui.actionOpen_file_s, SIGNAL(triggered()), this, SLOT(openLoader()));
}

void FRAn::openLoader()
{
	loaderform->show();
}

FRAn::~FRAn()
{
	delete loaderform;
}
