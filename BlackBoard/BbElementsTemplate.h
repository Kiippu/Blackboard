#pragma once
#ifndef BB_ELEMENTS_TEMPLATE_H
#define BB_ELEMENTS_TEMPLATE_H

#include "BlackboardBase.h"
#include <iostream>

template<class T>
class DataElementsTemplate :
	public BlackboardBase
{
public:

	virtual const T& GetDataValue() const { return m_data; };

	virtual void SetDataValue(const T& val) {
		if( m_locked == false){
			m_data = val;
		}
		else {
			// ASSERT_ERROR
			// LOG to screen
		}
	}

protected:
	bool m_locked = true;
	T m_data;
	T m_temp = m_data;
	DATA_TYPE m_data_type;
};

#endif // !BB_ELEMENTS_TEMPLATE_H


