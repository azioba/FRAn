#pragma once

#include <string>

struct usNorm
{
	double dip;
	double dipDir = 0;
};

struct euNorm
{
	double az;
	double dip;
	std::string dipAz;
};
