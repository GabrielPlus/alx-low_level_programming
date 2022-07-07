#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Check
 *@name: pointer to character
 *@f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
