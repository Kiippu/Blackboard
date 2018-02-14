#pragma once
#ifndef DATA_TEMPLATE_H
#define DATA_TEMPLATE_H

#include "DataParent.h"
#include <memory>
#include <string>
#include "MessageSecondaryType.h"
#include "MessagePrimaryTypes.h"

template<class T>
class DataTemplate : public DataParent
{
private:
	T data;
	bool locked = true;
public:

	size_t getID() { return m_ID; };

	T getValue() { return data; };
	
	virtual const bool getAsBool() const { return (bool)data; };

	virtual bool isLocked(bool x = true) { locked = x; return locked; }

	virtual const MESSAGE_PRIMARY  getMsgPrimary() const { return m_primary_msg; };

	virtual const MESSAGE_SECONDARY getMsgSecondary() const { return m_seconday_msg; };

	virtual void setParams(T d, MESSAGE_PRIMARY p = MSG_UNKNOWN_1, MESSAGE_SECONDARY s = MSG_UNKNOWN_2) { m_primary_msg = p; m_seconday_msg = s; data = d; };

};

#endif // !DATA_TEMPLATE_H

class Data_int : public DataTemplate<int> { };
class Data_double : public DataTemplate<double> { };
class Data_char : public DataTemplate<char> { };
class Data_string : public DataTemplate<std::string> { };

template<>
const bool DataTemplate<std::string>::getAsBool() const { return true; };
