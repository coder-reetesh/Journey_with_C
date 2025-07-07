/******************************************************************************
19. Write a C program to check Least Significant Bit (LSB) of a number is
 set or not.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number =");
    scanf("%d",&num);
    
    (num & 1)?printf("LSB bit is set") :printf("LSB bit is not set");

    return 0;
}
