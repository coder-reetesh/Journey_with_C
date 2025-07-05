/******************************************************************************
13.  Write a C program to enter two angles of a triangle and
find the third angle
*******************************************************************************/
#include <stdio.h>

int main()
{
    int angle_1,angle_2,angle_3;
    printf("Enter the angle of a triangle angle_1 =");
    scanf("%d",&angle_1);
    printf("Enter the angle of a triangle angle_2 =");
    scanf("%d",&angle_2);
    angle_3=180-(angle_1+angle_2);
    printf("Third angle of the triangle will be angle_3 = %d",angle_3);
    
    return 0;
    
}
