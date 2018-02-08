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

	DataElement<char> ben;
	DataElement<int> jess;
	DataElement<std::string> kip;
	DataElement<double> gil;
	DataElement<bool> dav;

	
	std::cout << " ben char = " << ben.GetAsBool() << std::endl;
	ben.SetDataValue('d');
	std::cout << " ben char = " << ben.GetAsBool() << std::endl;
	std::cout << " ben char = " << ben.GetDataValue() << std::endl;
	std::cout << " ben int lock = " << ben.IsLocked() << std::endl;
	ben.LockData(false);
	std::cout << " ben int lock = " << ben.IsLocked() << std::endl;
	ben.SetDataValue('d');
	std::cout << " ben int = " << ben.GetDataValue() << std::endl;
	std::cout << " ben int = " << ben.GetAsBool() << std::endl;

	std::cout << "\n" << std::endl;

	std::cout << " jess int = " << jess.GetAsBool() << std::endl;
	jess.SetDataValue(66);
	std::cout << " jess int = " << jess.GetAsBool() << std::endl;
	std::cout << " jess int = " << jess.GetDataValue() << std::endl;
	std::cout << " jess int lock = " << jess.IsLocked() << std::endl;
	jess.LockData(false);
	std::cout << " jess int lock = " << jess.IsLocked() << std::endl;
	jess.SetDataValue(66);
	std::cout << " jess int = " << jess.GetDataValue() << std::endl;
	std::cout << " jess int = " << jess.GetAsBool() << std::endl;

	std::cout << "\n" << std::endl;


	std::cout << " kip string = " << kip.GetAsBool() << std::endl;
	kip.SetDataValue("kory");
	std::cout << " kip string = " << kip.GetAsBool() << std::endl;
	std::cout << " kip string = " << kip.GetDataValue().c_str() << std::endl;
	std::cout << " kip int lock = " << kip.IsLocked() << std::endl;
	kip.LockData(false);
	std::cout << " kip int lock = " << kip.IsLocked() << std::endl;
	kip.SetDataValue("kory");
	std::cout << " kip int = " << kip.GetDataValue().c_str() << std::endl;
	std::cout << " kip int = " << kip.GetAsBool() << std::endl;

	std::cout << "\n" << std::endl;


	std::cout << " gil double = " << gil.GetAsBool() << std::endl;
	gil.SetDataValue(0.001);
	std::cout << " gil double = " << gil.GetAsBool() << std::endl;
	std::cout << " gil double = " << gil.GetDataValue() << std::endl;
	std::cout << " gil int lock = " << gil.IsLocked() << std::endl;
	gil.LockData(false);
	std::cout << " gil int lock = " << gil.IsLocked() << std::endl;
	gil.SetDataValue(0.001);
	std::cout << " gil int = " << gil.GetDataValue() << std::endl;
	std::cout << " gil int = " << gil.GetAsBool() << std::endl;

	std::cout << "\n" << std::endl;

	std::cout << " dav double = " << dav.GetAsBool() << std::endl;
	dav.SetDataValue(true);
	std::cout << " dav double = " << dav.GetAsBool() << std::endl;
	std::cout << " dav double = " << dav.GetDataValue() << std::endl;
	std::cout << " dav int lock = " << dav.IsLocked() << std::endl;
	dav.LockData(false);
	std::cout << " dav int lock = " << dav.IsLocked() << std::endl;
	dav.SetDataValue(true);
	std::cout << " dav int = " << dav.GetDataValue() << std::endl;
	std::cout << " dav int = " << dav.GetAsBool() << std::endl;


	int k;
	std::cin >> k;

	/*
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
	*/
}