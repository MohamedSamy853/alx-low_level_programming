#include "main.h"
/**
 * _isdigit - check is a char is a digit
 *
 * @a: paramter which check
 *
 * Return: always 0
 **/
int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
