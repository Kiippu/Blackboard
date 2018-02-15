#pragma once
#ifndef MESSAGE_MAIN_TYPE_H
#define MESSAGE_MAIN_TYPE_H

/************************************************************************************
																					*
								Message primary type								*
		All primary main messages, thes are general things such as the following:	*
		possition, health, state, score, time, etc									*
		levels or messages in order: Primary, Secondary, ...						*
																					*
************************************************************************************/

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
