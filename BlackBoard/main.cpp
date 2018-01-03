/*
Testing

-isLocked()		= WORKS
-LockData()		= WORKS
-GetAsBool()	= WORKS		// with hacks using var temp to compare original value
-GetDataValue()	= WORKS
-SetDataVale()	= WORKS
-GetDataTypes()	= WORKS		//I want to imple the macro enums!!!


*/


#include "BbData.h"
#include <iostream>

int main() {

	BbData_double dub;
	BbData_int inter;
	BbData_string sting;
	BbData_char cha;

	std::cout << "dub not locked: 0 = " << dub.IsLocked() << std::endl;
	std::cout << "inter not locked: 0 = " << inter.IsLocked() << std::endl;
	std::cout << "sting not locked: 0 = " << sting.IsLocked() << std::endl;
	std::cout << "char not locked: 0 = " << cha.IsLocked() << std::endl;

	dub.LockData(true);
	inter.LockData(true);
	sting.LockData(true);
	cha.LockData(true);

	std::cout << "dub is locked: 1 = " << dub.IsLocked() << std::endl;
	std::cout << "inter locked: 1 = " << inter.IsLocked() << std::endl;
	std::cout << "sting locked: 1 = " << sting.IsLocked() << std::endl;
	std::cout << "char locked: 1 = " << cha.IsLocked() << std::endl;

	

	int c;
	std::cin >> c;
	return 0;
}