#include "main.h"
/**
*_strspn-find length of accept
*
*@s:string
*
*@accept :string
*
*Return:length
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k=0;	
	int broken;

	for (i = 0; s[i] != '\0'; i++)
	{	
		broken = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				broken = 1;
				break;
			}
		}

		if(!broken)
			return (k);
	}
return(k);
}
