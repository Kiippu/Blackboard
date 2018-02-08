#include "Container.h"
#include "BbData.h"
#include <algorithm>


Container::Container()
{
};


Container::~Container()
{
};

void Container::Add(BlackboardBase * object)
{
	//adds object into vector
	m_blackboard.push_back(std::make_pair(object, object->GetID()));
};

void Container::Remove(MESSAGE_ID id)
{
	for (auto &obj : m_blackboard) {
		if (obj.first->GetID() == id) {
			// removes all elements with the value 5
			m_blackboard.erase(std::remove(m_blackboard.begin(), m_blackboard.end(), (std::make_pair(obj.first,obj.second))), m_blackboard.end());
		}
	}
};

void Container::Remove(MESSAGE_TYPE msg)
{
	for (auto &obj : m_blackboard) {
		if (obj.first->GetMessageType() == msg) {
			m_blackboard.erase(std::remove(m_blackboard.begin(), m_blackboard.end(), (std::make_pair(obj.first, obj.second))), m_blackboard.end());
		}
	}
};

bool Container::Exists(MESSAGE_ID id)
{
	//cycles through vector is that ID exists
	for (auto &obj : m_blackboard )
	{
		//if true
		if (obj.second == id) {
			return true;
		}
	}
	//if false
	return false;
};

bool Container::Exists(MESSAGE_TYPE msg)
{
	//cycles through vector is that msg type exists
	for (auto &obj : m_blackboard) {
		//if true
		if (obj.first->GetMessageType() == msg) {
			return true;
		}
	}
	//if false
	return false;
};

std::vector<std::pair<BlackboardBase*, MESSAGE_ID>> Container::GetDataByType(MESSAGE_TYPE msg)
{
	
	std::shared_ptr<std::vector<std::pair<BlackboardBase*, MESSAGE_ID>>> temp;
	
	for (auto &obj : m_blackboard) {
		if (obj.first->GetMessageType() == msg)
		{
			temp->push_back(obj);
		}
	}
	return *temp;
};

/*------------------ problem here!!!!!!!!!!!!!!!
Data & Container::GetDataByID(MESSAGE_ID id)
{
	Data* result;

	for (auto obj : m_blackboard) {
		result = dynamic_cast<Data*>(obj.first);
		if (result->GetDataType() == (TYPE_CHAR || TYPE_DOUBLE || TYPE_INT || TYPE_STRING || TYPE_NONE)) {
			if (result->GetID() == id) {
				result = dynamic_cast<Data*>(result);
				return *result;
			}
		}
	}
};
*/