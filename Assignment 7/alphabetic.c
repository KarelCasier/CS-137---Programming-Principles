#include <string.h>
#include <stdlib.h>

char *alphabetic (const char *s)
{
	if (!s)
		return NULL;
	char* result = malloc(0);
	int size = 0;
	int len = strlen(s);

	for (int j = 0; j < len; j++)
	{
		int ascii = (int)(s[j]);
		if ((ascii > 64 && ascii < 91) || (ascii > 96 && ascii < 123))
		{
			result = realloc(result, (++size)*sizeof(char));
			result[size-1] = s[j];
		}
	}

	return result;
}