#include "Container.h"



Container::Container()
{
}


Container::~Container()
{
}

void Container::Add(BlackboardBase * object)
{
	m_blackboard.push_back(std::make_pair(object, m_messageID++));
}

bool Container::Exists(MESSAGE_ID id)
{
	for (auto obj : m_blackboard )
	{
		if (obj.second == id) {
			return true;
		}
	}
	return false;
}

bool Container::Exists(MESSAGE_TYPE msg)
{
	for (auto obj : m_blackboard) {
		if (obj.first->GetMessageType() == msg) {
			return true;
		}
	}
	return false;
}
