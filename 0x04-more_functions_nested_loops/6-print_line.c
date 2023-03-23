#include "main.h"
/**
 * print_line - print - of lines
 *
 * @a:paramter which function take number of _
 *
 * Return: no value to return
 */
void print_line(int n)
{
	int i;

	if(n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for(i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

