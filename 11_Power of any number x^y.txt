/******************************************************************************
11.  Write a C program to find power of any number x^y.
*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int base,exponent,power=1,result;
    printf("Enter the value of base(x) =");
    scanf("%d",&base);
    printf("Enter the value of exponent(y) =");
    scanf("%d",&exponent);
    for(int i=1;i<=exponent;i++)
    {
        power*=base;
    }
    printf("%d power of %d = %d\n",base,exponent,power);
    printf("-----------------Alternative method using <math.h> header file-----------------\n");
    printf("Enter the base number (x): ");
    scanf("%d", &base);
    printf("Enter the exponent (y): ");
    scanf("%d", &exponent);
    result = pow(base, exponent);
    printf("(%.d ^ %d) = %d\n", base, exponent, result);
  
    return 0;
}
