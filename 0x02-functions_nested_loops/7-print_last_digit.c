#include "main.h"
/**
 * print_last_digit - print last digites of number
 *
 * @a: paramter that take
 *
 * Return : last digit of number
 */
int print_last_digit(int a)
{
	int last ;
	last = a % 10;
	if(a < 0)
	{
		return -(last);
	}
	return (last);
}
