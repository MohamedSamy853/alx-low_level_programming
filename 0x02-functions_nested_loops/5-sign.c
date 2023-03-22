#include "main.h"
/**
 * print_sign - function to print sign of anumber
 *
 * Return:1 ,+ if n > zero
 * and 0,0 if n is zero 
 * and -1 , - if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}	
