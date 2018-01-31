/*
Testing

Data
-isLocked()		= WORKS
-LockData()		= WORKS
-GetAsBool()	= WORKS		// with hacks using var temp to compare original value
-GetDataValue()	= WORKS
-SetDataVale()	= WORKS
-GetDataTypes()	= WORKS		//I want to imple the macro enums!!!

container
.Add()					= WORKS
.Exists(MESSAGE_ID)		= WORKS
.Exists(MESSAGE_TYPE)	= WORKS
.Remove()				= UNTESTED
.Remove()				= UNTESTED
.Get()					= UNTESTED
.Get()					= UNTESTED

*/


#include "BbData.h"
#include <iostream>
#include "Container.h"

int main() {

	Container container;

	Data_int * msg;

	Data_int ms2;

	msg = &ms2;

	msg->SetDataValue(100);

	container.Add(msg);

	

	std::cout << "" << container.Exists(0) << std::endl;
	std::cout << "" << container.Exists(MESSAGE_TYPE::TYPE_NOT_SET) << std::endl;

	std::cout << "" << container.Exists(1) << std::endl;
	std::cout << "" << container.Exists(MESSAGE_TYPE::TYPE_ATTACK) << std::endl;

	//container.Remove(msg->GetDataType());



	int k;
	std::cin >> k;
}