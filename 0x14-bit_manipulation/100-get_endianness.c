#include "main.h"

/**
 * get_endianness -this checks if a machine is little or big ending.
 * Return: 0 for big, 1 for little ending
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
