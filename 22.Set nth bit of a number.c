/******************************************************************************
22. Write a C program to set nth bit of a number.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,n_th_pos;
    printf("Enter the number =");
    scanf("%d",&num);
    
    printf("Enter the number to get 'n'-bit position(between : 0-31)=");
    scanf("%d",&n_th_pos);
    
    (num=num|(1<<n_th_pos))?printf("n_th_pos= %dth bit is set.",n_th_pos) :
    printf("n_th_pos= %dth bit is not set.",n_th_pos);

    return 0;
}
