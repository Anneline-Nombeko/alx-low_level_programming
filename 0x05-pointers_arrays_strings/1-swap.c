#include "main.h"
/**
 * main-swap value of intergers
 * @a integer to swap
 * @b integer to swap
 * return:success
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
