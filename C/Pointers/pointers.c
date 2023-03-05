#include <stdio.h>

/**
 * main - fooling around
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 10;
	int b = 9;
	int i = 124567;

	int *p = &a;
	int *q = &b;

	int c = *q;

	printf("Value of a = %d\n", a);
	printf("Value of c = %d\n", c);
	printf("Value of i in hexadecimal = %x\n", i);
/* Memory address is in hex */
	printf("Address of a = %p\n", (void *) &a);
	printf("Value of p = %p\n", (void *) p);
	printf("Address of p = %p\n", (void *) &p);
	printf("Address of b = %p\n", (void *) &b);
	printf("Value of q = %p\n", (void *) q);
	printf("Address of q = %p\n", (void *) &q);

	return (0);
}
