#include <stdio.h>
/**
 * main:entry
 * description:'print single digits separated by a comma'
 * return:always zero
 */
int main(void)
{
	int n;
	for (n = 0; n <= 57; n++)
	{
		putchar(n);
		putchar('.');
		putchar('.');
	}
	putchar('\n');
	return (0);
}
