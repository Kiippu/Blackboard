#include "Container.h"
#include "BbData.h"
#include <algorithm>


Container::Container()
{
}


Container::~Container()
{
}

void Container::Add(BlackboardBase * object)
{
	//adds object into vector
	m_blackboard.push_back(std::make_pair(object, m_messageID++));
}

void Container::Remove(MESSAGE_ID id)
{
	for (auto &obj : m_blackboard) {
		if (obj.first->GetID() == id) {
			// removes all elements with the value 5
			m_blackboard.erase(std::remove(m_blackboard.begin(), m_blackboard.end(), (std::make_pair(obj.first,obj.second))), m_blackboard.end());
		}
	}
}

void Container::Remove(MESSAGE_TYPE msg)
{
	for (auto &obj : m_blackboard) {
		if (obj.first->GetMessageType() == msg) {
			m_blackboard.erase(std::remove(m_blackboard.begin(), m_blackboard.end(), (std::make_pair(obj.first, obj.second))), m_blackboard.end());
		}
	}
}

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
}

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
}

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
}

BlackboardBase& Container::GetDataByID(MESSAGE_ID id)
{

	Data_char* result0;
	Data_double* result1;
	Data_int* result2;
	Data_string* result3;
	Data_none* result4;

	for (auto obj : m_blackboard) {
		if (obj.first->GetMessageType() == id)
		{
			switch (obj.first->GetDataType())
			{
			case DATA_TYPE::TYPE_CHAR:
				result0 = dynamic_cast<Data_char*>(obj.first);
				if (result0->GetID() == id) {
					return *obj.first;
				}
				break;
			case DATA_TYPE::TYPE_DOUBLE:
				result1 = dynamic_cast<Data_double*>(obj.first);
				if (result1->GetID() == id) {
					return *obj.first;
				}				break;
			case DATA_TYPE::TYPE_INT:
				result2 = dynamic_cast<Data_int*>(obj.first);
				if (result2->GetID() == id) {
					return *obj.first;
				}				break;
			case DATA_TYPE::TYPE_STRING:
				result3 = dynamic_cast<Data_string*>(obj.first);
				if (result3->GetID() == id) {
					return *obj.first;
				} 
				break;
			case DATA_TYPE::TYPE_NONE:
				result4 = dynamic_cast<Data_none*>(obj.first);
				if (result4->GetID() == id) {
					return *obj.first;
				}			
			default:
				// insert error msg
				break;
			}
		}
	}
}
