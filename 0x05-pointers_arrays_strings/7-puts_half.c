#include "main.h"
/**
 * puts_half - is a function to print half of string
 * @str: is a paramter that function take
 * Return: is a void function
 */
void puts_half(char *str)
{
	int start;
	int i;
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	start = len / 2;
	for (i = start ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

