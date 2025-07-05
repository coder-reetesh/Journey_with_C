/******************************************************************************
10.  Write a C program to convert day into years, weeks,months.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int days,week,remaining_days;
    int month,year;
    printf("Enter the number of days :");
    scanf("%d",&days);
    year=(days/365.25);
    int days_after_years = days % 365;
    
    month=(days_after_years/30);
    int days_after_months = days_after_years % 30;
    
    week=(days_after_months/7);
    remaining_days = days_after_months % 7;
    
    printf("Year=%d\tMonth=%d\tWeek=%d\tDays=%d",year,month,week,remaining_days);

    return 0;
}
