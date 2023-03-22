#include "main.h"
/**
 * _abs - give absoulate value of a
 *
 * @a: paramter to convert
 *
 * Return : a 
 */
int _abs(int a)
{
	if(a >= 0)
	{
		return (a);
	}
	else 
	{
		a = -1*a;
		return (a);
	}
}
