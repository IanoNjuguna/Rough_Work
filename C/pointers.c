#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 9;

	int *p = &a;
	int *q = &b;

	int c = *q;

	printf("Value of a = %d\n", &p);
	printf("Value of c = %d\n", c);
	printf("Value of a in hexadecimal = %x\n", a);
/* Memory address is in hex */
	printf("Address of a = %p\n", (void *) &a);
	printf("Address of p = %p\n", (void *) &p);

	return (0);
}
