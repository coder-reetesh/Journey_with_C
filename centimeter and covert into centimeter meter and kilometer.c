/******************************************************************************
Write a C program to enter length in centimeter and covert into centimeter
meter and kilometer.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float length;
    float meter,kilometer;
    printf("Enter length in centimeter :");
    scanf("%f",&length);
    meter=(length/100);
    kilometer=(length/100000);
    printf("meter=%.2f\tkilometer=%.2f",meter,kilometer);

    return 0;
}
