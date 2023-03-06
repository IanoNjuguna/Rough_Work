#include <stdio.h>
void f(int *a);

/**
 * main - Illustrate array type decay
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int *p;
	int t[10];

	p = t; /* Works because of auto implicit conversion to (int *) */

	printf("t: %p\n", (void *) &t[0]);
	printf("&t[0]: %p\n", (void *) &t[0]);
	printf("p: %p\n", (void *) p);
	f(t);
	return (0);
}

/**
 * f - Print the value of a pointer of type int
 * @a: address of an integer we need to print
 *
 * Return: Nothing
 */
void f(int *a)
{
	printf("a: %p\n", (void *) a);
	return;
}


