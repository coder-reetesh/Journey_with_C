/******************************************************************************
15. Write a C program to calculate area of an equilateral triangle.
*******************************************************************************/
#include <stdio.h>


int main()
{
    float arm,area;
    printf("Enter the equilateral triangle arm=");
    scanf("%f",&arm);
    area=(0.433012*(arm*arm));
    printf("The equilateral triangle area will be = %f",area);

    return 0;
    
}
