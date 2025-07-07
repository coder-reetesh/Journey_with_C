/******************************************************************************
21. Write a C program to get nth bit of a number.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,n_th_pos,bit;
    printf("Enter the number =");
    scanf("%d",&num);
    
    printf("Enter the number to get 'n'-bit position (0-31)=");
    scanf("%d",&n_th_pos);
    bit=((num >> n_th_pos) & 1);
    bit?printf("num=%d , n_th_pos= %dth bit is get.. bit=%d",num,n_th_pos,bit) :
    printf("num=%d ,n_th_pos= %dth bit is not get.. bit=%d",num,n_th_pos,bit);


    return 0;
}
