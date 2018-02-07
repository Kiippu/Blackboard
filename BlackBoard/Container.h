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
	void Add(BlackboardBase*);

	//removes data
	void Remove(MESSAGE_ID);
	void Remove(MESSAGE_TYPE);

	//checks if data exists in container
	bool Exists(MESSAGE_ID);
	bool Exists(MESSAGE_TYPE);

	//list of messages
	std::vector<std::pair<BlackboardBase *, MESSAGE_ID>> GetDataByType(MESSAGE_TYPE);
	//get data out of list


	/// Does like this vale of Data!!!!
	//Data& GetDataByID(MESSAGE_ID);

private:
	//Vector of all messages
	std::vector<std::pair<BlackboardBase *, MESSAGE_ID>> m_blackboard;
};

using CONTAINER_PTR = std::shared_ptr<Container>;