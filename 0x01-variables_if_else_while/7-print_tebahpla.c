#include<stdlib.h>
#include<stdio.h>
/**
 * main -this is a main function
 * 
 * Return:0 when closed
 * */
int main(void)
{
    char z;
    for(z='z'; z!='a'-1 ;z--)
    {
        putchar(z);
    }
   
    putchar('\n');
    return(0);
}
