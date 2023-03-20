#include<stdlib.h>
#include<stdio.h>
/**
 * main -this is a main function
 * 
 * Return:0 when closed
 * */
int main(void)
{
    int n ;
    int sep;
    for(n=48; n!=58;n++)
    {
        putchar(n);
        if(n!=57)
        {
            sep =44;
        }
        else
        {
           sep = 36;
        }
        putchar(sep);
        if (n!=57)
        {
            putchar(' ');
        }
    }
    
    putchar('\n');
    return(0);
}
