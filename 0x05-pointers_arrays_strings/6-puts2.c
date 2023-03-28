#include "main.h"
/**
 * puts2 - is a function to put every two time
 * @str: is a pointer to char
 * Return: it is a void function
 */
void puts2(char *str)
{
	int count = 0;

	while(*str != '\0')
	{
		if (count % 2 == 0)
			_putchar(*str);
		str++;
		count++;	
	}
	_putchar('\n');
}
