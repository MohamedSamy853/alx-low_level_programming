#include "main.h"
/**
 * main - program start here
 *
 * print_alphabet - print alphapetc no return
 *
 * Return :0 when terminited
 */
void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
