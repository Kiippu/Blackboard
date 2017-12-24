#pragma once
#ifndef BB_ELEMENTS_TEMPLATE_H
#define BB_ELEMENTS_TEMPLATE_H

#include "BlackboardBase.h"

template<class T>
class BbElementsTemplate :
	public BlackboardBase
{
public:

	virtual const T& GetDataValue() const = 0;

	virtual bool IsLocked() const { return false; };

	virtual void SetDataValue(const T& val) {
		if( Locked == true){
			// ASSERT_ERROR
			// LOG to screen
		}
	}
protected:
	bool Locked;
};

#endif // !BB_ELEMENTS_TEMPLATE_H


