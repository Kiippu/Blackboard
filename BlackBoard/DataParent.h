#pragma once
#ifndef DATA_PARENT_H
#define DATA_PARENT_H

#include "MessagePrimaryTypes.h"
#include "MessageSecondaryType.h"

static nextID next_id_for_data = 0;

class DataParent
{
public:
	
	virtual const bool  getAsBool() const = 0;

	virtual bool isLocked(bool l = false) = 0;

	virtual const MESSAGE_PRIMARY  getMsgPrimary() const = 0;

	virtual const MESSAGE_SECONDARY getMsgSecondary() const = 0;

protected:
	size_t m_ID = next_id_for_data++;
	MESSAGE_PRIMARY m_primary_msg = MESSAGE_PRIMARY::M_UNKNOWN_PRIMARY;
	MESSAGE_SECONDARY m_seconday_msg = MESSAGE_SECONDARY::M_UNKNOWN_SECONDARY;
};



#endif // !DATAPARENT_H
