#pragma once
#ifndef BLACKBOARD_BASE_H
#define BLACKBOARD_BASE_H

#include "DataType.h"
#include "MessageType.h"

//holds the next the incrememnted id tag
static MESSAGE_ID		m_messageID = 0;
static MESSAGE_TYPE		m_messageType = MESSAGE_TYPE::TYPE_NOT_SET;

class BlackboardBase
{
public:
	virtual const DATA_TYPE& GetDataType() const = 0;

	virtual const bool GetAsBool() const = 0;

	virtual const MESSAGE_ID const GetID() { return m_messageID; };

	virtual const MESSAGE_TYPE const GetMessageType() { return m_messageType; };

};



#endif // !BLACKBOARD_BASE_H


