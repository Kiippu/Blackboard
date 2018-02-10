/*
Testing

Data
-isLocked()		= WORKS
-LockData()		= WORKS
-GetAsBool()	= WORKS
-GetDataValue()	= WORKS
-SetDataVale()	= WORKS
-GetDataTypes()	= WORKS

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
#include <string>
#include "Container.h"

int main() {

	CONTAINER_PTR container;

	//container->Add(66, MSG_ATTACK,false);

	int data = 9;
	MESSAGE_TYPE msg = MSG_ATTACK;

	

	container->Add(data, msg, false);

/*

Run - says container is empty.... check check!!!


*/
	int k;
	std::cin >> k;
	//container->Add();

	return 0;
}