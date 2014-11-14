#include <string.h>

typedef enum {false, true} bool;

int contains(char* s, char* t)
{
	if (!s || !t)
		return 0;
	int lenS = strlen(s);
	int lenT = strlen(t);
	int appears = 0;
	bool wholeIn = true;

	for (int i = 0; i < lenS; i++)
	{
		if (s[i] == t[0]) //Found first character
		{
			for (int j = 0; j < lenT; j++)
			{
				if( s[i+j] != t[j] )
				{
					i++;
					wholeIn = false;
					break;
				}
			}
			if (wholeIn)
				appears++;
			wholeIn = true;
		}
	}
	return appears;
}