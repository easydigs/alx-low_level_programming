#include "main.h"

/**
 * print_line - straight line on the terminal
 * @n: No of times the character '_' will be printed
 * Return: 0 on success
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
