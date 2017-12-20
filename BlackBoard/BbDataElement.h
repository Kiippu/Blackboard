#ifndef BB_DATA_ELEMENT_H
#define BB_DATA_ELEMENT_H

#include "BbElementsTemplate.h"

template<class T>
class BbDataElement : public BbElementsTemplate<T>
{
public:
	virtual const T& GetDataValue() const { return Data };

	virtual bool CanSet() { return state };

	virtual void SetDataValue(const T& val) { Data = val };

	virtual bool GetAsBool() const { return (bool)Data };

protected:
	T Data;
	bool state;
};
#endif // !BB_DATA_ELEMENT_H