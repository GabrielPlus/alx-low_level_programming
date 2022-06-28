#include <unistd.h>
/**
 * _putchar - prints an integer
 * @i: The integer to print
 *
 * Return: Always 0.
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
