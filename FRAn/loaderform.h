#pragma once

#include <QDialog>
#include <QTableWidget>
#include <QComboBox>
#include <QStandardItemModel>
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
	
	const QTableWidget getQTableWidget() const
	{
		
	}

private:
	Ui::LoaderForm *_ui = nullptr;
	QStandardItemModel *model = nullptr;
	QTableView *view = nullptr;
	std::vector<euNorm> _inputData;
	euNorm data;
	//QComboBox *datatype = nullptr;
	

private slots:
	void openPath();
	void loadFile();
};



