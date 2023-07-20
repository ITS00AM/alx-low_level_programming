#include "main.h"

/**
 * _isupper - checks for upperclass letter
 * @c: Letter to be checked
 * Return: 1 if c is upperclass otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
