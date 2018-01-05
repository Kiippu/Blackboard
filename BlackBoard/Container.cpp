#include "Container.h"



Container::Container()
{
}


Container::~Container()
{
}

void Container::Add(BlackboardBase & object)
{
	m_blackboard.push_back(object, object.m_messageID++);
}
