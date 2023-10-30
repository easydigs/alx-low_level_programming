#include <stdio.h>

/**
 * main -  prints number of arguments
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
