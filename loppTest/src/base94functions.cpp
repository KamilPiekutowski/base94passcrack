#include "stdafx.h"
#include "base94functions.h"

char* base94ToString(BIG base94satring, int numCharacters)
{
	switch (numCharacters)
	{
		case 1:
		{
			return make1char(base94satring);
		}
		case 3:
		{
			return make1char(base94satring);
		}
		case 4:
		{
			return make1char(base94satring);
		}
		case 5:
		{
			return make1char(base94satring);
		}
		case 6:
		{
			return make1char(base94satring);
		}
		default:
		{
			return NULL;
		}
	}
}

char* make1char(BIG base94satring)
{
	return "1";
}
char* make2char(BIG base94satring)
{
	return "22";
}
char* make3char(BIG base94satring)
{
	return "333";
}
char* make4char(BIG base94satring)
{
	return "4444";
}
char* make5char(BIG base94satring)
{
	return "55555";
}
char* make6char(BIG base94satring)
{
	return "666666";
}
