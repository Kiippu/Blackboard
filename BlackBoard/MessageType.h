#pragma once
#ifndef MESSAGE_TYPE_H
#define MESSAGE_TYPE_H

typedef enum : unsigned int
{
	TYPE_INT = 0,
	TYPE_DOUBLE,
	TYPE_STRING,
	TYPE_CHAR,
	TYPE_NONE

} MESSAGE_TYPE;

typedef unsigned int ID_MESSAGE;


#endif // !MESSAGE_TYPE_H