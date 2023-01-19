#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 *
 * @n: the number to start counting from to 98
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
		printf("%d\n", 98);
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
		printf("%d\n", 98);
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
