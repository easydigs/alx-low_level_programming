#include "main.h"

#define CHAR_BITS 8
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * print_bin - prints binary rep of @n
 * @number: decimal value
 *
 * Return: nothing
*/

void print_bin(unsigned long int number)
{
	if (number >> 1)
		print_bin(number >> 1);

	putc((number & 1) ? '1' : '0', stdout);
}

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index to set the value of bit to 1
 *
 * Return: 1 if it worked OR -1 if it failed
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;
	#ifdef DEBUG
	unsigned long int n_before = *n;
	#endif

	if (index >= INT_BITS)
		return (-1);

	m = ~(m << index);

	*n = (*n & m);

	#ifdef DEBUG
	printf("\n%ld in binary is ", n_before);
	print_bin(n_before);
	printf(" while NOT (~) of mask right shifted to index %d is ", index);
	print_bin(m);
	printf(" our new value n in binary is ");
	print_bin(*n);
	printf("\n\n");
	#endif

	return (1);
}
