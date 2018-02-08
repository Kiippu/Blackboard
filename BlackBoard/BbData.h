#pragma once
#include "BbDataElement.h"
#include "DataType.h"

template<>
const DATA_TYPE& DataElement<char>::GetDataType() const { DATA_TYPE m_data_type = TYPE_CHAR; return m_data_type; };

template<>
const DATA_TYPE& DataElement<int>::GetDataType() const { DATA_TYPE m_data_type = TYPE_INT; return m_data_type; };

template<>
const DATA_TYPE& DataElement<std::string>::GetDataType() const { DATA_TYPE m_data_type = TYPE_STRING; return m_data_type; };

template<>
const DATA_TYPE& DataElement<double>::GetDataType() const { DATA_TYPE m_data_type = TYPE_DOUBLE; return m_data_type; };
