#pragma once
#include "BbDataElement.h"
#include <iostream>
class BbData :
	public BbDataElement<int>
{
public:
	virtual const LABEL_TYPE& GetDataType() {return TYPE_INT;};
};

class BbData :
public BbDataElement<double>
{
public:
	virtual const LABEL_TYPE& GetDataType() { return TYPE_DOUBLE; };
};

class BbData :
public BbDataElement<std::string>
{
public:
	virtual const LABEL_TYPE& GetDataType() { return TYPE_STRING; };
};

