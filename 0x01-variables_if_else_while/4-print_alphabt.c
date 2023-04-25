#include <stdio.h>
/**
 * main:ebtry point
 * description:'print lower cases except q and e'
 * return:Always 0
 */
int  main(void)
{
	char alpha;
	while (alpha == 122)
	{
		if (alpha == 101 || alpha == 113)
		{
			alpha++;
			continue;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);

}

