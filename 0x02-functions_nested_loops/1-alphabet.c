#include <stdio.h>
#include <stdou.h>
/**
 * print_alphabet - main  Entry point
 * Return: Always 0
 */
int print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');


	return (0);
}
