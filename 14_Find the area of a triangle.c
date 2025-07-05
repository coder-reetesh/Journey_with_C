/******************************************************************************
14.  Write a C program to enter base & height of a triangle and
find the area.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float base,height,area=1;
    printf("Enter the triangle base=");
    scanf("%f",&base);
    printf("Enter the triangle height =");
    scanf("%f",&height);
    area=(0.5*base*height);
    printf("The triangle area will be = %f",area);

    return 0;
    
}
