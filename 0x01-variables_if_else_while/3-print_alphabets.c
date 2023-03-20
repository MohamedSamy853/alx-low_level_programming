#include<stdio.h>
#include<stdlib.h>
/**
 * main -this is a main function
 *
 * Return:0 when closed
 */
int main(void)
{
	char a;
	char A;
	for(a='a'; a!='z'+1; a++)
	{
		putchar(a);
	}
	for(A='A'; A!='Z'+1; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return(0);
}

