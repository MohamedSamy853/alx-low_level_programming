#include "main.h"
#include<stdio.h>
/**
 * print_array - is a function that print array
 * @a: is a pointer of array
 * @n: is a number of elements which nedded for print
 * Return: is a void function
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d",a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
