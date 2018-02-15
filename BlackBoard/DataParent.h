
/************************************************************************************
																					*
									DataParent										*
				Base class od data which goes in to blackboard.h					*
*																					*
************************************************************************************/

#pragma once
#ifndef DATA_PARENT_H
#define DATA_PARENT_H

#include "MessagePrimaryTypes.h"
#include "MessageSecondaryType.h"

/// staic unsugned int ID set
static nextID next_id_for_data = 0;

class DataParent
{
public:
	// get ID
	virtual const size_t  getID() const { return m_ID; };
	// get obj at bool
	virtual const bool  getAsBool() const = 0;
	// ask if its locked
	virtual bool isLocked(bool l = false) = 0;
	//get objecs primary msg
	virtual const MESSAGE_PRIMARY  getMsgPrimary() const = 0;
	// get obj secondary msh
	virtual const MESSAGE_SECONDARY getMsgSecondary() const = 0;

protected:
	/// ID for data
	size_t m_ID = next_id_for_data++;
	/// primary msg 
	MESSAGE_PRIMARY m_primary_msg = MESSAGE_PRIMARY::M_UNKNOWN_PRIMARY;
	/// secondary msg
	MESSAGE_SECONDARY m_seconday_msg = MESSAGE_SECONDARY::M_UNKNOWN_SECONDARY;
};



#endif // !DATAPARENT_H
