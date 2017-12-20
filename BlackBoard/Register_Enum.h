#pragma once
#define REGISTER_ENUM(x) x,
typedef enum
{
	#include "Names.h"
	MSG_NUM
};
#undef REGISTER_ENUM

#define REGISTER_ENUM(x) #x,
static const char* MsgNameText[] =
{
#include "Names.h"
	"Invalid"
};
#undef REGISTER_ENUM