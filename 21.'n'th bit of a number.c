/******************************************************************************
21. Write a C program to get nth bit of a number.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,n;
    printf("Enter the number =");
    scanf("%d",&num);
    
    printf("Enter the n =");
    scanf("%d",&n);
    
    (num & (1<<n))?printf(" %d th bit is set",n) :printf(" %d th bit is not set",n);

    return 0;
}
