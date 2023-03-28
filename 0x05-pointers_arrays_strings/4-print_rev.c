#include "main.h"
/**
 * print_rev - is a function to print reverse string
 * @s: is a pointer for array of char
 * Return: it is a void function
 */
void print_rev(char *s)
{
	int len = 0;
	int o;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (o = len - 1; o > 0 ; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
