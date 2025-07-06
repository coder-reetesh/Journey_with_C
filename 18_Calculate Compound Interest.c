/******************************************************************************
18. Write a C program to enter P. 1. R and calculate Compound Interest.
*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
   float P, T, R, r, base, Compound_interest;
   int choice,N;
    
    printf("Enter the number of P (Principal amount)=");
    scanf("%f",&P);
    
    printf("Enter the number of T (Time period in year)=");
    scanf("%f",&T);
    
    printf("Enter the number of R (Rate of interest)=");
    scanf("%f",&R);
    r=R/100;
    
    printf("--------Menu--------\n1. Monthly\n2. Quaterly\n3. Half-yearly\n"
    "4. Yearly\nEnter Choice =");
    scanf("%d",&choice);
    
    if(choice==1)
    {
        N=12; // Monthly
        base=(1+r/N);
    }
    else if(choice==2)
    {
        N=4; // Quaterly
        base=(1+r/N);
    }
    else if(choice==3)
    {
        N=2; // Half-yearly
        base=(1+r/N);
    }
    else
    {
        N=1; // Yearly
        base=(1+r/N);
    }
    
    Compound_interest =(P *(pow(base, N*T)));
    
    printf("\n--------------------Compound Interest Calculation--------------------\n");
    printf("Principal amount=%.2f\nTime period(Year)=%.1f\nRate of interest=%.2f%%\n"
    "Number of months compounded/year=%d\nCompound_interest=%.2f",P,T,R,N,Compound_interest);

    return 0;
}
