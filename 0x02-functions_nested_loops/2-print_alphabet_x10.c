#include "main.h"
/**
 * print alphabet-x10
 * Return:zero
 */

void print_alphabet_x10(void)
{
	char num, letter;
	for (number = 0; num <= 9; num++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
