#include <stdio.h>
#include <string.h>

/**
 * char *_strcpy - copies a string from a pointer
 * @src: Contains the string to be copied
 * @dest: The string will be copied to here
 *
 * Return: *dest
 * Author: IanoNjuguna
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i;
	unsigned int len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];

		if (i == len)
		{
			dest[i + 1] = '\0';
		}
	}

	return (dest);
}

