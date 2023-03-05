#include <stdio.h>

/**
 * main - Print the address of a pointer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int *p;

	printf("Address of variable 'p': %p\n", (void *) &p);
	return (0);
}

