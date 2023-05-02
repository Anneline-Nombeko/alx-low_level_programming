#include "main.h"
/**
*main:_put - prints a string in reverse
*@str:print string
*Return:success
*/
void print_rev(char *s)
{
	int longi = 0;
	int 0;
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

