#include "main.h"

/**
 * print last digit - Prints th las digiof a number
 * @n: The number to be treated
 * Retn: Value of the last digit of number
 */

int print_last_digit(int n)

{

	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);

}
