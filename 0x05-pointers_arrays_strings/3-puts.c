#include "main.h"
/**
 * main:Put - prints a string,followed by a new line
 * @str: print string
 * return:success
 */
int _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
