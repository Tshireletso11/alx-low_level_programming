#include "main.h"
#include <string.h>

/**
 * puts2 - a function that prints every other string
 * @str: string
 */

void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
