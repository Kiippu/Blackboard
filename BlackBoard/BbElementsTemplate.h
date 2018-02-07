#pragma once
#ifndef BB_ELEMENTS_TEMPLATE_H
#define BB_ELEMENTS_TEMPLATE_H

#include "BlackboardBase.h"
#include <iostream>

template<class T>
class BbElementsTemplate :
	public BlackboardBase
{
public:

	virtual const T& GetDataValue() const = 0;

	virtual bool IsLocked() const { return false; };

	virtual void SetDataValue( T& val) {
		if( m_locked == true){
			// ASSERT_ERROR
			// LOG to screen
		}
	}

	virtual const T& GetDataType() const = 0;


protected:
	bool m_locked = true;
	T m_data;
	T m_temp;
	T m_data_type;
};

#endif // !BB_ELEMENTS_TEMPLATE_H


