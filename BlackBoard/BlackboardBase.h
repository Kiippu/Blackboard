#pragma once
#ifndef BLACKBOARD_BASE_H
#define BLACKBOARD_BASE_H

#include "DataType.h"
#include "MessageType.h"

//holds the next the incrememnted id tag
static MESSAGE_ID		m_messageID = 0;

class BlackboardBase
{
public:

	virtual bool IsLocked() const = 0;

	virtual const bool GetAsBool() const = 0;

	virtual const MESSAGE_ID const GetID() { return m_messageID; };

	virtual const MESSAGE_TYPE const GetMessageType() { return m_messageType; };

	// virtual const ###### const getOwner() {retrun m_owner;};

protected:
	unsigned int m_data_elements_id = m_messageID++;
	// ######  *m_owner;   /// add entity owner pointer

	MESSAGE_TYPE m_messageType = MESSAGE_TYPE::MSG_NOT_SET;

};



#endif // !BLACKBOARD_BASE_H


