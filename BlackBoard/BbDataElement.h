#ifndef BB_DATA_ELEMENT_H
#define BB_DATA_ELEMENT_H

#include "BbElementsTemplate.h"

template<class T>
class BbDataElement : public BbElementsTemplate<T>
{
public:
	virtual const T& GetDataValue() const { return Data; };

	virtual bool IsLocked() { return Locked; };

	virtual void LockData(bool val) { Locked = val; };

	virtual void SetDataValue(const T& val) { Data = val; };

	virtual const bool GetAsBool() const { return (bool)Data; };

protected:
	T Data;
};
#endif // !BB_DATA_ELEMENT_H