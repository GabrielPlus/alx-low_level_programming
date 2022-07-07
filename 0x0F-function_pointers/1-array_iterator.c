#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - Check.
 *@array: pointer to character.
 *@size: pointer to function.
 *@action: pointer.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int it;

	if (array == NULL || size == '\0' || action == NULL)
		return;
	for (it = 0; it <= size - 1; it++)
		action(array[it]);
}
