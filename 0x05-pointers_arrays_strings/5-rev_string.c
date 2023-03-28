#include "main.h"
/**
 * print_rev - a function tr reveser string
 * @s: is a pointer of array of char
 * Return: is is a void number
 */
void rev_string(char *s)
{
	char rev;
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
