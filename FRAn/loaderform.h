#pragma once

#include <QDialog>
#include <QTableWidget>
#include "Converter.h"
#include "DataType.h"


namespace Ui
{
	class LoaderForm;
}

class LoaderForm : public QDialog
{
	Q_OBJECT

public:
	LoaderForm(QDialog *parent = 0);
	~LoaderForm();


	
	const std::vector<euNorm>& getInputData() const
	{
		return _inputData;
	}
	


private:
	Ui::LoaderForm *_ui = nullptr;
	std::vector<euNorm> _inputData;
	euNorm data;
	

private slots:
	void openPath();
	void loadFile();
};



