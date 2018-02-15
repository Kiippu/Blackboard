
/************************************************************************************
																					*
						Message Secondary Types										*
				all sub catagories of the primary messages							*
																					*
************************************************************************************/

#pragma once
#ifndef MESSAGE_SPECIFIC_TYPE_H
#define MESSAGE_SPECIFIC_TYPE_H


typedef enum : size_t
{
	M_FIGHTING_RAW_DAMAGE_VALAUE,
	M_FIGHTING_DAMAGE_PER_SECOND,
	M_FIGHTING_RESISTANCE,
	M_FIGHTING_ARMOR,
	M_UNKNOWN_SECONDARY

} MESSAGE_SECONDARY;




#endif // !MESSAGE_SPECIFIC_TYPE_H
