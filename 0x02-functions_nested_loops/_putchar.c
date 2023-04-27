#include "main.h"
#include <unistd.>
/**
 *main
 *description:'print  _putchar c'
 *Return:on success 1
 */
int _puchar(char c)
{
	return (write(1, &c, 1));
}

