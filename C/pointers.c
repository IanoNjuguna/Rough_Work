#include <stdio.h>

int main(void)
{
	int a = 10;
/*	int b = 9; */

	int *p = &a;
/*	int *q = &b; */

	printf("Value of a = %d", *p);

	return (0);
}
