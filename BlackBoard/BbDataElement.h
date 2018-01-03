#ifndef BB_DATA_ELEMENT_H
#define BB_DATA_ELEMENT_H

#include "BbElementsTemplate.h"
#include <string>

template<class T>
class BbDataElement : public BbElementsTemplate<T>
{
public:
	virtual const T& GetDataValue() const { return Data; };

	virtual bool IsLocked() { return Locked; };

	virtual void LockData(bool val) { Locked = val; };

	virtual void SetDataValue(const T& val) { Data = val; };

	virtual const bool GetAsBool() const {
		if (Data == temp)
			return false;
		else
			return true;
	};

protected:
	T temp = Data;
};
#endif // !BB_DATA_ELEMENT_H