#pragma once
#include <vector>
#include "BlackboardBase.h"
#include "BbDataElement.h"
#include <memory>
#include "MessageType.h"
#include <utility>

namespace {
	
}

class Container
{
public:
	Container();
	~Container();

	//adds data
	template<class T>
	void Add(T data, MESSAGE_TYPE msg = MESSAGE_TYPE::MSG_NOT_SET,bool locked = true);

	//removes data
	void Remove(MESSAGE_ID);
	void Remove(MESSAGE_TYPE);

	//checks if data exists in container
	bool Exists(MESSAGE_ID);
	bool Exists(MESSAGE_TYPE);


	//list of messages
	std::vector<std::shared_ptr<BlackboardBase>> GetDataByType(MESSAGE_TYPE);
	

private:
	//Vector of all messages
	std::vector<std::shared_ptr<BlackboardBase>> m_blackboard;
};

using CONTAINER_PTR = std::shared_ptr<Container>;

using INT_PTR = std::shared_ptr<DataElement<int>>;
using CHAR_PTR = std::shared_ptr<DataElement<char>>;

template<class T>
inline void Container::Add(T data, MESSAGE_TYPE msg, bool locked)
{
	// Creates components depending on what component type is passed
	switch (msg)
	{
		// Animated sprites
	case(TYPE_INT): {
		INT_PTR d = std::make_shared<DataElement<int>>();
		d->setUp(data, msg, false);
		m_blackboard.push_back(d);
		std::cout << "Added DATA_TYPE::TYPE_INT" << std::endl;
		break;
	}
	default:
		break;
	}
}
