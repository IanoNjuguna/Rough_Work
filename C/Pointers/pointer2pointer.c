#include <stdio.h>
int main(void);
/**
 * main - Find the value of a pointer to a pointer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;

	/* take the address of var */
	ptr = &var;

	/* take the address of ptr using the memory address operator */
	pptr = &ptr;

	/* take the value using pptr */
	printf("Value of var = %d\n", var);
	printf("Address of var = %p\n", (void *) &var);
	printf("Value available at *ptr = %d ('%p')\n", *ptr, (void *) ptr);
	printf("Address of *ptr = %p\n", (void *) &ptr);
	printf("Value available at **pptr = %d ('%p')\n", **pptr, (void *) pptr);

	return (0);
}

