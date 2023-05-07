#include <stdio.h>
#include "main.h"
/**
*main:entry point
*description:'prints 10x alphabets'
*Return:always zero
*/

int  main(void)
{
	char x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
