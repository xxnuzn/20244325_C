#include <ctype.h>

char up_down_case(char c)
{
	if(islower(c))
		return toupper(c);
	else if(isupper(c))
		return tolower(c);
	else
		return c;
}
