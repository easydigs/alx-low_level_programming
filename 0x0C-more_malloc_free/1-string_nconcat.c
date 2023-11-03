#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of element to concatenate from s2
 *
 * Return: pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, k;
	char *output;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
		j = n;
	output = malloc(sizeof(char) * (i + j + 1));
	if (output == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		output[k] = s1[k];
	for (k = 0; k < j; k++)
		output[k + i] = s2[k];
	output[i + j] = '\0';
	return (output);

}
