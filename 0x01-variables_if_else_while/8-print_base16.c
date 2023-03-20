#include<stdlib.h>
#include<stdio.h>
/**
 * main -this is a main function
 * 
 * Return:0 when closed
 * */
int main(void)
{
    char a;
    int n ;
    for(n=48; n!=58;n++)
    {
        putchar(n);
    }
    for(a ='a'; a!='f'+1;a++)
    {
        putchar(a);
    }
   
    putchar('\n');
    return(0);
}
