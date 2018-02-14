#include "Blackboard.h"

void Blackboard::add(std::shared_ptr<DataParent> arg)
{
	m_container.push_back(arg);
}
