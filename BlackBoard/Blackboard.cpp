#include "Blackboard.h"
#include <algorithm>


void Blackboard::add(std::shared_ptr<DataParent> arg)
{
	m_container.push_back(arg);
}

// find obj, removes it and exits
void Blackboard::remove(std::shared_ptr<DataParent> arg)
{
	for (auto & obj : m_container) {
		if (obj->getID() == arg->getID()) {
			m_container.erase(std::remove(m_container.begin(), m_container.end(), obj), m_container.end());
			break;
		}
	}
}

//finds obj, removes it, changes iteratror, repeats
void Blackboard::remove(MESSAGE_PRIMARY msg)
{
	for (int iter = 0; iter < (m_container.size()); iter++) {
		if (m_container[iter]->getMsgPrimary() == msg) {
			m_container.erase(std::remove(m_container.begin(), m_container.end(), m_container[iter]), m_container.end());
			iter--;
		}
	}
}

//finds obj, removes it, changes iteratror, repeats
void Blackboard::remove(MESSAGE_SECONDARY msg)
{

	for (int iter = 0;iter < (m_container.size()); iter++ ) {
		if (m_container[iter]->getMsgSecondary() == msg ) {
			m_container.erase(std::remove(m_container.begin(), m_container.end(), m_container[iter]), m_container.end());
			iter--;
		}
	}
}

// get list of dat with same msg
std::vector<std::shared_ptr<DataParent>> Blackboard::getMsg(MESSAGE_PRIMARY msgPrimary)
{
	for (auto & obj : m_container) {
		if (obj->getMsgPrimary() == msgPrimary) {
			m_primary_temp.push_back(obj);
		}
	}
	return m_primary_temp;
}

// get list of dat with same msg
std::vector<std::shared_ptr<DataParent>> Blackboard::getMsg(MESSAGE_SECONDARY msgSceondary)
{
	for (auto & obj : m_container) {
		if (obj->getMsgSecondary() == msgSceondary) {
			m_secondary_temp.push_back(obj);
		}
	}
	return m_secondary_temp;
}

//gets data depending on ID
std::shared_ptr<DataParent> Blackboard::getID(size_t id)
{
	for (auto & obj : m_container) {
		if (obj->getID() == id) {
			return obj;
		}
	}
	return std::shared_ptr<DataParent>();
}
