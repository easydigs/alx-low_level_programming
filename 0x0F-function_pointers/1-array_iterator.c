#include <stddef.h>

/**
 * array_iterator - function that executes a given function
 *                  as a parameter on each element of an array
 *
 * @array: the array
 * @size: array size
 * @action: pointer to function to call
 *
 * Return: empty if @array and @action is NULL
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
