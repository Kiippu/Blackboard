#pragma once
#ifndef MESSAGE_MAIN_TYPE_H
#define MESSAGE_MAIN_TYPE_H



typedef enum : size_t
{
	M_FIGHTING_MSG,
	M_HUNTING_MSG,
	M_QUESTING_MSG,
	M_FARMING_MSG,
	M_UNKNOWN_PRIMARY

} MESSAGE_PRIMARY;

typedef size_t nextID;

#endif // !MESSAGE_MAIN_TYPE_H
