#pragma once

#include <string>
#include <QDebug>
#include "DataType.h"
#include "loaderform.h"
#include "clusteranalysis.h"



class Converter 
{
public:
	Converter();
	void convertToUsNorm();
	void convertToEuNorm();
	~Converter();

	const std::vector<usNorm>& getOutputData() const
	{
		return _outputData;
	}

	const std::vector<euNorm>& setInputDataToConvert()
	{
		
	}

	

private:
	
	usNorm outData;
	std::vector<usNorm> _outputData;
	std::vector<euNorm> _inputDataToConvert;

};




