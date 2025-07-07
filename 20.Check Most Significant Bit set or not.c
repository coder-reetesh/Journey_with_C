/******************************************************************************
20. Write a C program to check Most Significant Bit (MSB) of a number 
is set or not.

*******************************************************************************/
#include <stdio.h>

int main()
{
    short int num,mask=0x8000;
    printf("Enter the number =");
    scanf("%hd",&num);
    
    (num & mask)?printf("MSB bit is set") :printf("MSB bit is not set");

    return 0;
}
