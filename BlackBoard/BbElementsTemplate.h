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
		if( Locked == true){
			// ASSERT_ERROR
			// LOG to screen
		}
	}
protected:
	bool Locked = true;
	T Data;
	T temp;
};

#endif // !BB_ELEMENTS_TEMPLATE_H


