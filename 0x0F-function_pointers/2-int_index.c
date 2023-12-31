#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: pointer to array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool s;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			s = cmp(array[i]);
			if (s == TRUE)
				return (i);
		}
	}

	return (-1);

}
