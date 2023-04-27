#include <stdio.h>
#include "main.h"
/**
*main:entry point
*description:'prints 10x alphabets'
*Return:always zero
*/

int  main(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
