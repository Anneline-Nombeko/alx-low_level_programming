#include "main.h"
/**
*function
*concat two strings
*return:always o
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	i=0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] !='\0')
	{
		dest[i]=src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

