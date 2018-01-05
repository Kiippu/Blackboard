#pragma once
#ifndef BLACKBOARD_BASE_H
#define BLACKBOARD_BASE_H

#include "DataType.h"


class BlackboardBase
{
public:
	virtual const DATA_TYPE& GetDataType() const = 0;

	virtual const bool GetAsBool() const = 0;

	//holds next the incrememnted id tag
	static ID_MESSAGE	m_messageID;

};



#endif // !BLACKBOARD_BASE_H


