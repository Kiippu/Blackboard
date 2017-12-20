#pragma once
#ifndef BLACKBOARD_BASE_H
#define BLACKBOARD_BASE_H

#include "DataType.h"


class BlackboardBase
{
public:
	virtual const LABEL_TYPE& GetDataType() const = 0;

	virtual const bool GetAsBool() const = 0;
};



#endif // !BLACKBOARD_BASE_H


