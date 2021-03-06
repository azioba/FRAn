#include "Converter.h"




Converter::Converter(std::vector<euNorm>& inputData):
	_inputDataToConvert(inputData)
{
}

void Converter::convertToUsNorm()
{
	enum Quadrant
	{
		N = -90,
		NE = -90,
		E = +90,
		SE = +90,
		S = +90,
		SW = +90,
		W = +90,
		NW = +270
	} quadrant;


	

	for (auto& data : _inputDataToConvert)
	{

		if (data.dipAz == "N" && data.az < 90) quadrant = Quadrant(NW);
		else if (data.dipAz == "N" && data.az > 90) quadrant = Quadrant(N);
		else if (data.dipAz == "NE") quadrant = Quadrant(NE);
		else if (data.dipAz == "E" && data.az < 90) quadrant = Quadrant(E);
		else if (data.dipAz == "E" && data.az > 90) quadrant = Quadrant(NE);
		else if (data.dipAz == "SE") quadrant = Quadrant(SE);
		else if (data.dipAz == "S") quadrant = Quadrant(S);
		else if (data.dipAz == "SW") quadrant = Quadrant(SW);
		else if (data.dipAz == "W") quadrant = Quadrant(W);
		else if (data.dipAz == "NW") quadrant = Quadrant(NW);
		outData.dipDir = data.az + quadrant;
		outData.dip = data.dip;
		qDebug() << outData.dip << " " << outData.dipDir;
		_outputData.push_back(outData);

	}
}

void Converter::convertToEuNorm()
{
}

Converter::~Converter()
{

}