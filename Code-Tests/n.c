#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: The n integer
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

void print_times_table(int n)
{
	int j;
	int k;

	while (n > 0 && n < 15)
	{
		for (k = 0; k <= n; k++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d", j * k);
				printf(", ");
			}
			printf("\n");
		}
		n++;
		printf("\n");
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_times_table(3);
	printf("\n");
	print_times_table(5);
	printf("\n");
	print_times_table(98);
	printf("\n");
	print_times_table(12);
	return (0);
}
