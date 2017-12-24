#pragma once
#include "BbDataElement.h"
#include <iostream>
class BbData_int :
	public BbDataElement<int>
{
public:
	virtual const LABEL_TYPE& GetDataType() const {return TYPE_INT;};
};

class BbData_double :
public BbDataElement<double>
{
public:
	virtual const LABEL_TYPE& GetDataType() const { return TYPE_DOUBLE; };
};

