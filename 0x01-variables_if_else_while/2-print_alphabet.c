#include <stdio.h>
/**
 *main - Entry point
 *Description: loop
 *Return: 0 always
 */
int main(void)
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
