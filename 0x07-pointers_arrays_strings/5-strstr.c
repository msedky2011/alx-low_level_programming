#include "main.h"
/**
*_strstr-find length of accept
*
*@s:string
*
*@accept :string
*
*Return:length
*/

char *_strstr(char *s, char *accept)
{
	unsigned int i, j;
	int broken = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	
		if (s[i] == accept[0])
		{
			broken = 0;
			for (j = 0 ; accept[j] != '\0'; j++)
			{
				if (s[i+j+1]=='\0')
					break;
				if (s[i + j] != accept[j])
				{
					broken = 1;
					break;
				}
			}

			if (!broken)
			{
				return (s + i);
			}
		}

	}

	return (NULL);
}
