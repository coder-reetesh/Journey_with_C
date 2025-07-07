/******************************************************************************
23. Write a C program to clear nth bit of a number.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,n_th_pos;
    printf("Enter the number =");
    scanf("%d",&num);
    
    printf("Enter the number to clear 'n'-bit position (0-31)=");
    scanf("%d",&n_th_pos);
    
    (num&(~(1<<n_th_pos)))?printf("%d th bit is clear",n_th_pos) :printf("%d th bit is not clear",n_th_pos);

    return 0;
}
