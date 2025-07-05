/******************************************************************************
12.  Write a C program to enter any number and calculate its square root.
*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int number,i=1,squre_root=1;
    printf("Enter the positive number =");
    scanf("%d",&number);
    if(number<0)
    {
        printf("Its a negative number ..!!");
    }
    else
    {
        while(squre_root*squre_root<=number)
        {
            squre_root++;
        }
        squre_root=squre_root-1;
    }
    printf("positive number= %d squre_root is = %d\n",number,squre_root);
    printf("\n-----------------Alternative method using <math.h> header file-----------------\n");
    
    unsigned short int num, result;

    printf("Enter a number: ");
    scanf("%hd", &num);

    if (num < 0)
    {
        printf("Square root of negative number is not defined in real numbers.\n");
    }
    else
    {
        result = sqrt(num);
        printf("Number=%hd Square root is %hd\n", num, result);
    }
    return 0;
    
}
