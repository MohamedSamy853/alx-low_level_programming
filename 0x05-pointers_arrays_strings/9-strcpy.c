#include "main.h"
/**
 * _strcpy - is a function to copy
 * @src: source
 * @dest: destiantion
 * Return :dest  pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (x = 0 ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
