/******************************************************************************
8.  Write a C program to enter temperature in Celsius and 
    convert to Fahrenheit.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float temperature,fahrenheit;
    
    printf("Enter temperature in Celsius :");
    scanf("%f",&temperature);
    printf("temperature= %.2f degree Celsius.\n",temperature);
    fahrenheit=(temperature*1.8)+32;
    printf("Fahrenheit=%.4f ",fahrenheit);

    return 0;
}
