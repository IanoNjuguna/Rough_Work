#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: Value to be used
 * If n is greater than 15 or less than 0
 * the function should not print anything
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

void print_times_table(int n)
{
	int o;

	while (n < 15 && n > 0)
	{
		for (o = 0; o < n; o++)
		{
			printf("%2d, ", n * o);
		}

		n++;
	}
	printf("\n");
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("3 TIMES TABLE\n");
	print_times_table(3);
	printf("\n");
	printf("5 TIMES TABLE\n");
	print_times_table(5);
	printf("\n");
	printf("98 TIMES TABLE\n");
	print_times_table(98);
	printf("\n");
	printf("12 TIMES TABLE\n");
	print_times_table(12);
	return (0);
}

