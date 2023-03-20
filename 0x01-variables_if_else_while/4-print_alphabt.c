#include<stdlib.h>
#include<stdio.h>
/**
 * main -this is a main function
 *
 * Return:0 when closwed
 */
int main(void)
{
	char a;
	for(a='a'; a!='z'+1; a++)
	{
		if(a!='q' || a!='e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return(0);
}
