#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d", i * j);
			if (j < 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

/**
 * main - Entry point for test
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	times_table();
	return (0);
}
