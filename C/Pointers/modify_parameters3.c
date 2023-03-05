#include <stdio.h>
void modif_my_char_var(char *cc, char ccc);

/**
 * modif_my_char_var - Change the values to 'o' and 'l' respectively
 * @ccc: a useless character
 * @cc: Will change the value of a variable
 *
 * Return: nothing
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';

	ccc += 3;
}

/**
 * main - Change the value of a variable
 *			from outside the function it is declared in (use pointers)
 *
 *	Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Address of 'c': %p\n", (void *) &c);
	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of '*p': %p\n", (void *) &p);
	printf("Value of '*p': %p\n", (void *) p);

	modif_my_char_var(p, c);

	printf("Address of 'c': %p\n", (void *) &c);
	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of '*p': %p\n", (void *) &p);
	printf("Value of '*p': %p\n", (void *) p);

	return (0);
}

