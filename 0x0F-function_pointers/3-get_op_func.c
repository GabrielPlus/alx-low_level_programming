#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - pointer for a specific function
 * @s: My operator
 * Return: My assignment to the respective function.
 */
int (*get_op_func(char *s))(int, int)
{
		int i;
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};
		i = 0;
		while (ops[i].op[0] != s[0])
		{
			i++;
			if (ops[i].op == NULL)
			{
				printf("Error\n");
				exit(99);
			}
		}
		return (ops[i].f);
}
