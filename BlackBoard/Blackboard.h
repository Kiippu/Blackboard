#pragma once
#ifndef BLACKBOARD_H
#define BLACKBOARD_H

/************************************************************************************
																					*
									Blackboard										*
		Adds removes and find data, Data definition found in DataTemplate.h			*
																					*
************************************************************************************/

#include "MessagePrimaryTypes.h"
#include "MessageSecondaryType.h"
#include "DataParent.h"
#include <vector>
#include <memory>


class Blackboard 
{
private:

	/// main contaner for all data objects
	std::vector<std::shared_ptr<DataParent>> m_container;

	///containers for temparary lists of data
	std::vector<std::shared_ptr<DataParent>> m_primary_temp;
	std::vector<std::shared_ptr<DataParent>> m_secondary_temp;

public:

	// adds data
	void add(std::shared_ptr<DataParent> arg);

	//removes data
	void remove(std::shared_ptr<DataParent> arg);
	void remove(MESSAGE_PRIMARY msg);
	void remove(MESSAGE_SECONDARY);

	//finds data
	std::vector<std::shared_ptr<DataParent>> getMsg(MESSAGE_PRIMARY msgPrimary);
	std::vector<std::shared_ptr<DataParent>> getMsg(MESSAGE_SECONDARY msgSceondary);
	std::shared_ptr<DataParent> getID(size_t id);
};




#endif // !BLACKBOARD_H
