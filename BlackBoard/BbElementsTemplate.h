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

	virtual const T& GetDataValue() const { 
		if (m_notSet == false) {
			std::cout << "<<ERROR>> DataElement of ID:" << m_data_elements_id <<" has no value set <<ERROR>>" << std::endl;
		}
			return m_data; 
	};

	virtual void SetDataValue(const T& val) {
		if( m_locked == false){
			m_notSet = true;
			m_data = val;
		}
		else {
			// ASSERT_ERROR
			// LOG to screen
			std::cout << "<<ERROR>> This vale it locked, unlock first before setting" << std::endl;
		}
	}

protected:
	bool m_locked = true;
	T m_data;
	bool m_notSet = false;
	DATA_TYPE m_data_type;
};

#endif // !BB_ELEMENTS_TEMPLATE_H


