#include "main.h"
/**
 * _strlen - a function taht take ponter of char and calc len of it
 * @s: is a pointer to char
 * Return: len of string
 */
int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
