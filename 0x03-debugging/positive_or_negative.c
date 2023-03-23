#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * positive_or_negative - show if number is postove or negative
 *
 * @a:paramter is a number to valid
 *
 * Return: 0 when closed
 */
void positive_or_negative(int a)
{
	if(a < 0)
	{
		printf("%d is negative",a)
	}
	else
	{
		printf("%d is positive",a)
	}
}
