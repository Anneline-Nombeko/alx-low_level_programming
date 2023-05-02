#include "main.h"
/**
 * main-swap value of intergers
 * @a integer to swap
 * @b integer to swap
 * return:success
 */
voide swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = *m;
}
