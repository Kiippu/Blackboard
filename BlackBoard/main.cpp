/*
Testing



*/



#include <iostream>
#include <string>
#include<vector>
#include <memory>
#include "DataTemplate.h"
#include"Blackboard.h"


int main() {

	
	auto bill = std::make_shared<Data_string>();
	bill->setParams("Kory",M_QUESTING_MSG,M_FIGHTING_DAMAGE_PER_SECOND);

	bill->isLocked(false);

	Blackboard bb;


	bb.add(bill);




	int k;
	std::cin >> k;


	return 0;
}