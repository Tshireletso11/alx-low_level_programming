#include <stdio.h>
/**
 * main - shows the number of base 10
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char base_ten = '0';

	while (base_ten <= '9')
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');

	return (0);
}
