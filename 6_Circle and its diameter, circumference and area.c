/******************************************************************************
6.    Write a c program to enter radius of a circle and its diameter,
circumference and area.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float pi=3.1415;
    float radius,diameter,circumference,area;
    printf("Enter the radius =");
    scanf("%f",&radius);
    diameter=(2*radius);
    circumference=(2*pi*radius);
    area=(pi*radius*radius);
    printf("diameter=%f\tcircumference=%f\narea=%f",diameter,circumference,area);
    return 0;
}
