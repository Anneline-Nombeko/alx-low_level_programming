#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- entry point
 * description:'check for positive or negative number'
 * Return: always 0
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("if the number is greater than 0: is positive\n");
	} else if (n == 0)
	{
		printf("if the number is 0: is zero\n");
	} else
	{
		printf("if the number is less than 0: is negative\n");
	}
	return (0);
}
