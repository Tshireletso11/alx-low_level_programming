#include "main.h"

/**
 * clear_bit - this sets the value of a given bit to the value 0
 * @n: points the pointer to the number to change
 * @index: the index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
