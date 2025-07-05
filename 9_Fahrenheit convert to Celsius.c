/******************************************************************************
9.  Write a C program to enter temperature in Fahrenheit and 
    convert to Celsius.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float temperature,Celsius;
    printf("Enter temperature in fahrenheit :");
    scanf("%f",&temperature);
    printf("temperature= %.2f degree fahrenheit.\n",temperature);
    Celsius=(temperature-32)*5/9;
    printf("Celsius=%.4f degree",Celsius);

    return 0;
}
