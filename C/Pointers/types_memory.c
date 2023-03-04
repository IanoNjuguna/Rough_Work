#include <stdio.h>

/**
 * main - Use sizeof() to determine sizes
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	printf("Size of type 'int' on a 64-bit PC: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on a 64-bit PC: %lu bytes\n", sizeof(float));
	printf("Size of type 'char' on a 64-bit PC: %lu\n", sizeof(char));
	printf("Size of type 'double' on a 64-bit PC: %lu bytes\n", sizeof(double));
	printf("Size of type 'variable n' on a 64-bit PC: %lu bytes\n", sizeof(n));

	return (0);
}
