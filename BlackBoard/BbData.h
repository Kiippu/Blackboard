#pragma once
#include "BbDataElement.h"

class BbData_int :
	public BbDataElement<int>
{
public:
	virtual const DATA_TYPE& GetDataType() const {return TYPE_INT;};
};

class BbData_double :
public BbDataElement<double>
{
public:
	virtual const DATA_TYPE& GetDataType() const { return TYPE_DOUBLE; };
};

class BbData_string :
	public BbDataElement<std::string>
{
public:
	virtual const DATA_TYPE& GetDataType() const { return TYPE_STRING; };
	void SetDataValue(std::string& val) {
		temp.clear();
		Data = val;
	};
};

class BbData_char :
	public BbDataElement<char>
{
public:
	virtual const DATA_TYPE& GetDataType() const { return TYPE_CHAR; };
};