#include <stdio.h>
/**
 * main - Entry point
 *
 * Desc: Prints alphebet 5 times
 * Return: Always 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 5; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			printf("%c", j);
		}
		printf("\n");
	}
	return (0);
}

