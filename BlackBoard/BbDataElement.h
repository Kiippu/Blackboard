#ifndef BB_DATA_ELEMENT_H
#define BB_DATA_ELEMENT_H

#include "BbElementsTemplate.h"

template<class T>
class DataElement : 
	public DataElementsTemplate<T>
{
public:

	virtual void LockData(bool val) { m_locked = val; };

	virtual bool IsLocked() const { return m_locked; };

	virtual const DATA_TYPE& GetDataType() const {  m_data_type = TYPE_UNKNOWN; return m_data_type; };

	virtual const bool GetAsBool() const {
		if (m_locked == true)
			return false;
		else
			return true;
	};

	// maybe a set all members method taking all required vars in arguments.

	virtual bool setUp(/* all args to set up data*/) {
		// data
		// locked
		// owner of msg
		//msg type
		return true;
	};

private:
	DATA_TYPE m_data_type;
	std::string m_noValue;
};



#endif // !BB_DATA_ELEMENT_H