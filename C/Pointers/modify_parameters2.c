#include <stdio.h>
void modif_my_param(int *m);

/**
 * modif_my_param - sets the integer to 402
 * @m: A pointer to the integer we want to set to 402
 *
 * Return:: nothing
 */
void modif_my_param(int *m)
{
	printf("Value of 'm': %p\n", (void *) m);
	printf("Address of 'm': %p\n", (void *) &m);

	*m = 402;
}

/**
 * main - Change the value of a variable from
 *		outside the function it is declared in (using a pointer)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 98;

	printf("Value of 'n' before the call: %d\n", n);
	printf("Address of 'n': %p\n", (void *) &n);
	printf("Value of 'p': %p\n", (void *) p);
	printf("Address of 'p': %p\n", (void *) &p);

	modif_my_param(p);

	printf("Value of 'n' after the call: %d\n", n);

	return (0);
}

