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
	void Add(BlackboardBase&);
	//removes data
	void Remove(ID_MESSAGE);
	//checks if data exists in container
	bool Find();
	//list of messages
	std::vector<std::pair<BlackboardBase,int>> GetDataByType(MESSAGE_TYPE);
	//get data out of list
	BlackboardBase& GetDataByID(int);

private:
	
	std::vector<std::pair<BlackboardBase, unsigned int>>		m_blackboard;

};

using CONTAINER_PTR = std::shared_ptr<Container>;