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

	virtual bool CanSet() const { return false };

	virtual void SetDataValue(const T& val) {
		// insert ASSERT_MSG as default to say I can not store val data
	}
};

#endif // !BB_ELEMENTS_TEMPLATE_H


