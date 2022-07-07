#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Show the result from an operation of two integers
 * @argc: How many arguments I have
 * @argv: My string of strings
 * Return: Nothing.
 */

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int resa, resb, resfinal;

		if (*argv[1] >= '0' && *argv[1] <= '9')
			resa = atoi(argv[1]);
		else
		{
			printf("Error\n");
			exit(98);
		}
		if (*argv[3] >= '0' && *argv[3] <= '9')
			resb = atoi(argv[3]);
		else
		{
			printf("Error\n");
			exit(98);
		}
		/* Dirigir los resultados y el operados a hacer macth para redirigir*/
		/*su respectiva funcion.*/
		resfinal = (*get_op_func(argv[2]))(resa, resb);
		printf("%d\n", resfinal);
		return (0);
	}
	printf("Error\n");
	exit(98);
	return (0);
}
