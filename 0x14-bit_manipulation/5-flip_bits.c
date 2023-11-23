#include "main.h"

/**
 * print_bin - prints binary rep of @n
 *
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
 * flip_bits - function that returns the number of bits you
 *             would need to flip to get from one number to
 *             another
 * @n: decimal number
 * @m: the other decimal number
 *
 * Return: number of bits to flip to get @m from @n
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int dif_bits = 0;
	unsigned long int dif;

	dif = n ^ m;

	#ifdef DEBUG
	printf("\n(n) %ld and (m) %ld in binary is ", n, m);
	print_bin(n);
	printf(" ");
	print_bin(m);
	printf(" dif is %ld and in binary is ", dif);
	print_bin(dif);
	printf("\n");
	#endif

	do {
		#ifdef DEBUG
		printf("dif %ld before right shift ", dif);
		print_bin(dif);
		printf("\n");
		#endif

		dif_bits += (dif & 1);
		dif >>= 1;

		#ifdef DEBUG
		printf("dif %ld after right shift ", dif);
		print_bin(dif);
		printf(" and dif_bit %d before leaving loop\n\n", dif_bits);
		#endif
	} while (dif > 0);

	return (dif_bits);
}
