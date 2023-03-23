#include "main.h"
/**
 * _isupper - to identify if letter is upper
 *
 * @a: parmeter which function is given
 *
 * Return: always 0
 */
int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
