/******************************************************************************
3.    Write a c program to enter two number and perform 
all arithmetic operations
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a=");
    scanf ("%d",&a);
    printf("Enter the value of b=");
    scanf ("%d",&b);
    
    printf("(a+b)=%d\t(a-b)=%d\n(a*b)=%d\t(a/b)=%d",(a+b),(a-b),(a*b),(a/b));

    return 0;
}
