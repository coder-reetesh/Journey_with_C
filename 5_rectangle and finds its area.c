/******************************************************************************
5.    Write a c program to enter length and breadth of rectangle and
finds its area.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float length , breadth, area;
    printf("Enter the length =");
    scanf("%f",&length);
    printf("Enter the breadth =");
    scanf("%f",&breadth);
    area=(length*breadth);
    printf("Area=%f",area);

    return 0;
}
