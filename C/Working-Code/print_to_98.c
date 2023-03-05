#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 *
 * Numbers must be separated by a comma, followed by a space
 *
 * Numbers should be printed in order
 *
 * The first printed number should be the number passed to your function
 *
 * The last printed number should be 98
 *
 * @n: The integer passed to the function
 *
 * Return: Always 0
 *
 * Author: IanoNjuguna
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}

		printf("%d", n);
		printf("\n");
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}

		printf("%d", n);
		printf("\n");
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

