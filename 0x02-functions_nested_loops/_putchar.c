#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success
 * on error, -1 isreturned, and errno is set appropriately.
 */
int_putchar(char c)
{
     return(write(1,&c,1));
}     
