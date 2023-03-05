#include <stdio.h>
/**
 * main - Find the addresses of variables in memory
 *
 * Return: Always 0
 */

int main(void)
{
	char c;
	int n;

	printf("Address of variable 'c': %p\n", (void *)&c);
	printf("Address of variable 'n': %p\n", (void *)&n);

	return (0);
}

