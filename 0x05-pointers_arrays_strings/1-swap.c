#include "main.h"
/**
 * swap_int - a function that swap two elements value
 * @a: first number
 * @b: second number
 * Return: it is acoid function
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
