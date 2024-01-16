#include "main.h"

/**
 * _islower - Function to check for lower character
 * @c: parameter to be checked
 * Return: 0 on (success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
