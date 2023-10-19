#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase
 * @x: pointer to string
 *
 * Return: pointer to uppercase string
*/

char *string_toupper(char *x)
{
	int len_string;

	len_string = 0;
	while (x[len_string] != '\0')
	{
		if (x[len_string] >= 'a' && x[len_string] <= 'z')
		{
			x[len_string] = x[len_string] - 32;
		}
		len_string++;
	}
	return (x);
}
