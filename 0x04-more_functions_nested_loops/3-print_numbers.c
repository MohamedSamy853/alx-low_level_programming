#include "main.h"
/**
 * print_numbers - to print number from 0-9
 *
 * Return : no value to return it is a void
 **/
void print_numbers(void)
{
	char i;

	for(i = '1' ; i <= '9' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
