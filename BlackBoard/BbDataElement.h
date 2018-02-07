#ifndef BB_DATA_ELEMENT_H
#define BB_DATA_ELEMENT_H

#include "BbElementsTemplate.h"

template<class T>
class BbDataElement : public BbElementsTemplate<T>
{
public:
	virtual const T& GetDataValue() const { return m_data; };

	virtual bool IsLocked() { return m_locked; };

	virtual void LockData(bool val) { m_locked = val; };

	virtual void SetDataValue(const T& val) { m_data = val; };

	virtual const T& GetDataType() const { return m_data_type; };

	virtual void SetDataType(const T& val) { m_data_type = val; };

	virtual const bool GetAsBool() const {
		if (m_data == m_temp)
			return false;
		else
			return true;
	};

protected:
	T m_data;
	T m_temp = m_data;
	T m_data_type;
};
#endif // !BB_DATA_ELEMENT_H