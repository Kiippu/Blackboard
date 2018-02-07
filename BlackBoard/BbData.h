#pragma once
#include "BbDataElement.h"

class Data_int :
	public BbDataElement<int>
{

};

class Data_char :
	public BbDataElement<char>
{

};

class Data :
	public BbDataElement<double>
{
	Data() {};
};
