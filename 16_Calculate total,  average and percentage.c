/******************************************************************************
16. Write a C program to enter marks of five subjects and calculate total,
 average and percentage.
*******************************************************************************/
#include <stdio.h>


int main()
{
    float bangla,english,mathematics,physics,chemistry;
    float total,average,percentage;
    printf("Enter the number of bangla=");
    scanf("%f",&bangla);
    
    printf("Enter the number of english=");
    scanf("%f",&english);
    
    printf("Enter the number of mathematics=");
    scanf("%f",&mathematics);
    
    printf("Enter the number of physics=");
    scanf("%f",&physics);
    
    printf("Enter the number of chemistry=");
    scanf("%f",&chemistry);
    
    total=(bangla+english+mathematics+physics+chemistry);
    average=total/5; // 5 is the number of subjects
    percentage= ((total/500)*100);
    printf("Total=%.2f\tAverage=%.2f\tPercentage=%.2f%%\n",total,average,percentage);

    return 0;
}
