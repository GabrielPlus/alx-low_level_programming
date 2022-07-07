#include <stddef.h>
/**
 * int_index - check.
 *@array: pointer to character.
 *@size: integer.
 *@cmp: pointer.
 * Return: Always
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int it, cmp2;

	if (array && size > 0 && cmp)
	{
		cmp2 = 0;
		for (it = 0; it < size; it++)
		{
			cmp2 = cmp(array[it]);
			if (cmp2 == 1)
				return (it);
		}
		return (-1);
	}
	return (-1);


}
