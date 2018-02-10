#ifndef BB_DATA_ELEMENT_H
#define BB_DATA_ELEMENT_H

#include "BbElementsTemplate.h"

template<class T>
class DataElement : 
	public DataElementsTemplate<T>
{
public:

	virtual bool IsLocked() const { return m_locked; };

	virtual const DATA_TYPE& GetDataType() const {  m_data_type = TYPE_UNKNOWN; return m_data_type; };

	virtual const bool GetAsBool() const {
		if (m_notSet == true)
			return false;
		else
			return true;
	};

	// maybe a set all members method taking all required vars in arguments.

	virtual bool setUp(T data, MESSAGE_TYPE msg = MESSAGE_TYPE::MSG_NOT_SET, bool lock = false/* , m_owner pointer */ ) {
		m_data = data;
		m_locked = lock;
		m_messageType = msg;
		m_notSet = true;
		/* m_owner = owner*/
		return true;
	};

private:
	DATA_TYPE m_data_type;
	std::string m_noValue;
};



#endif // !BB_DATA_ELEMENT_H