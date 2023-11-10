#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_op_func - get ops function pointer of type char array
 *               that accepts two inputs of int data type
 *
 * @s: The operator passed a argument
 *
 * Return: A pointer to the function corresponding
 * 	   to the operator given as a parameter
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
