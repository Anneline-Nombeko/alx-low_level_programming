#include <stdio.h>
/**
 *main:entry
 *description:print base 10
*/
int main(void)
{
	int x;
	for (x = 0; x <= 9; x++)
	{
		putchar( x + 48);
	}
	printf('\n');
	return (0);
}
