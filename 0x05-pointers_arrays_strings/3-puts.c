#include "main.h"
/**
 * _puts - is a function that take array of char and print it
 * @str: if a pointer
 * Return: it is a void function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
