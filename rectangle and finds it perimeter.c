/******************************************************************************
4.    Write a c program to enter length and breadth of rectangle and 
finds it perimeter.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float length , breadth, perimeter;
    printf("Enter the length =");
    scanf("%f",&length);
    printf("Enter the breadth =");
    scanf("%f",&breadth);
    perimeter=2*(length+breadth);
    printf("Perimeter=%f",perimeter);
    return 0;
}
