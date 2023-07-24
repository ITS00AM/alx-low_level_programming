#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)
{

	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
