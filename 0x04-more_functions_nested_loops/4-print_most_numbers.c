#include "main.h"
/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: 0 always
 **/
void print_most_numbers(void)
{
	char i;

	for(i = '1' ; i <= '9' ; i++)
	{
		if(i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
