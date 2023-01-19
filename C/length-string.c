/* #include "main.h" */
#include <string.h>
#include <stdio.h>

int _strlen(char *s)
{
	int length = strlen(s);

	return (length);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
