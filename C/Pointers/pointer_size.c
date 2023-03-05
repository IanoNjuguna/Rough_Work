#include <stdio.h>

/**
 * main - printing the size (in bytes) of a pointer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int *p;

	printf("Size of pointer (in bytes): %lu\n", sizeof(p));
	return (0);
}

