#include "main.h"
#include <stdio.h>

/**
 * main - check thr code
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "ROT13 (\"rotate by 13 places\",\t
	sometimes hyphenated ROT-13) is a simple lett\t
		er substitution cipher.\n";
	char *p;

	p = rot13(s);

	char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *p;

p = rot13(s);

	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);

	rintf("%s", p);
	rintf("------------------------------------\n");
	rintf("%s", s);

	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);

	return (0);
}
