/******************************************************************************
17. Write a C program to enter P. T. R and calculate Simple Interest.
*******************************************************************************/
#include <stdio.h>


int main()
{
    float P, T, R, Simple_Interest;
    
    printf("Enter the number of P (Principal amount)=");
    scanf("%f",&P);
    
    printf("Enter the number of T (Time period/year)=");
    scanf("%f",&T);
    
    printf("Enter the number of R (Rate of interest/per year)=");
    scanf("%f",&R);
    
    Simple_Interest=(P*T*R)/100;
    
    printf("Principal amount=%.2f\tTime period=%.1f\t\t Rate of interest=%.2f%%\n"
    "Simple_Interest=%.2f\n=",P,T,R,Simple_Interest);

    return 0;
}
