#include "main.h"
#include <stdio.h>
/**
 * rev_string - check the code for Holberton School students.
 * @s: pointer int type
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, j;
	char temp[500];

	for (i = 0; *s != '\0'; i++)
	{
		temp[i] = *s;
		s++;
	}

	s--;

	for (j = 0; j != i; j++)
	{
		*s = temp[j];
		s--;
	}

	s++;

}
