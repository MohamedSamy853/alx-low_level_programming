#include "main.h"
/**
 * _isalpha - check if value is alpha
 *
 * @c: paramter is consider as an ascii code for letter
 *
 * Return: 1 if this letter is alpha
 * and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
