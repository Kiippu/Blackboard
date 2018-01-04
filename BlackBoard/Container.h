#pragma once
#include <vector>
#include "BlackboardBase.h"
#include <memory>
#include "MessageType.h"

class Container
{
public:
	Container();
	~Container();
	//addds data
	void AddData(BlackboardBase&);
	//removes data
	void RemoveData(ID_MESSAGE);
	//checks if data exists in container
	bool DataExists();
	//list of messages
	std::vector<BlackboardBase&> GetMessage(MESSAGE_TYPE);



private:
	
	std::vector<BlackboardBase>		m_blackboard;

};

using CONTAINER_PTR = std::shared_ptr<Container>;