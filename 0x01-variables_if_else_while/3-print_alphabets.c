#include <stdio.h>
/**
 * main-entry position
 * description:'print upper case letter'
 * Return :always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}

