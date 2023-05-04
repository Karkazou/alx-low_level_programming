#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatenates two strings
 *
 *@dest: The destination string.
 *
 *@src: The source string.
 *
 * Returns: void
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
	ptr++;
	}
	while (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}
	*ptr = '\0';
	return (dest);
}
