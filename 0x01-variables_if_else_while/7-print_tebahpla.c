#include <stdio.h>
/**
 * main:entry
 * description:'Write a program that prints the lowercase alphabet in reverse, followed by a new line.'
 * Return:always 0
 */
int main(void)
{
	int x = 122;
	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
}
