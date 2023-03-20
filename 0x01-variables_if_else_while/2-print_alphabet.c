#include<stdlib.h>
#include<stdio.h>
/**
 * main- is the main function
 *
 * Return:0 when function is finished
 */
int main(void)
{
    char a ;
    for(a ='a'; a!='z'+1; a++)
    {
        putchar(a);
    }
    putchar('\n');
    return(0);
}
