#include "BbData.h"

int main() {

	BbData_double girl;
	


	std::cout << "can I set: " << girl.IsLocked() << std::endl;

	std::cout << "Get as bool: " << girl.GetAsBool() << std::endl;

	std::cout << "Get data type: " << girl.GetDataType() << std::endl;

	girl.SetDataValue(99.99);

	std::cout << "Get data value: " << girl.GetDataValue() << std::endl;


	int c;
	std::cin >> c;
	return 0;
}