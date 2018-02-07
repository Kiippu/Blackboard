#pragma once
#include "BbDataElement.h"

class Data_int :
	public BbDataElement<int>
{
public:
	virtual const DATA_TYPE& GetDataType() const {return TYPE_INT;};
};

class Data_double :
public BbDataElement<double>
{
public:
	virtual const DATA_TYPE& GetDataType() const { return TYPE_DOUBLE; };
};

class Data_string :
	public BbDataElement<std::string>
{
public:
	virtual const DATA_TYPE& GetDataType() const { return TYPE_STRING; };
	void SetDataValue(std::string& val) {
		temp.clear();
		Data = val;
	};
};

class Data_char :
	public BbDataElement<char>
{
public:
	virtual const DATA_TYPE& GetDataType() const { return TYPE_CHAR; };
};

class Data_none :
	public BbDataElement<char>
{
public:
	virtual const DATA_TYPE& GetDataType() const { return TYPE_NONE; };
};