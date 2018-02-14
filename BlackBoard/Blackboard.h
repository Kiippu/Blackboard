#pragma once
#ifndef BLACKBOARD_H
#define BLACKBOARD_H

#include "MessagePrimaryTypes.h"
#include "MessageSecondaryType.h"
#include "DataParent.h"
#include <vector>
#include <memory>


class Blackboard 
{
private:

	std::vector<std::shared_ptr<DataParent>> m_container;

	std::vector<std::shared_ptr<DataParent>> m_primary_temp;
	std::vector<std::shared_ptr<DataParent>> m_secondary_temp;


public:

	void add(std::shared_ptr<DataParent> arg);

	void remove(std::shared_ptr<DataParent> arg);

	std::vector<std::shared_ptr<DataParent>> getMsg(MESSAGE_PRIMARY msgPrimary);
	std::vector<std::shared_ptr<DataParent>> getMsg(MESSAGE_SECONDARY msgSceondary);


};




#endif // !BLACKBOARD_H
