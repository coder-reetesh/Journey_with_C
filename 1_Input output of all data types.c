/******************************************************************************
1. Write a to perform input output of all data types
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a; //%d
    unsigned int z; // %u
    
    float b; //%f
    
    char c; // %c
    
    double d;// %lf
    
    short e; // %hi or %hd 
    unsigned short k;//%hu
    
    long f; // %ld
    unsigned long g;// %lu
    
    long long h; // %lli or %lld
    unsigned long long int i;// %llu
    
    printf("Enter the int:");
    scanf("%d",&a);
    
    
    printf("Enter the unsigned int:");
    scanf("%u\n",&z);
    
    
    printf("Enter the float:");
    scanf("%f",&b);
    
    
    printf("Enter the char:");
    scanf("%c",&c);
    
    printf("Enter the double:");
    scanf("%lf",&d);
    
    printf("Enter the short:");
    scanf("%hd",&e);
    
    
    printf("Enter the unsigned short:");
    scanf("%hu",&k);
    
    
    printf("Enter the long:");
    scanf("%ld",&f);
    
    
    printf("Enter the unsigned long:");
    scanf("%lu",&g);
    
    
    printf("Enter the long long:");
    scanf("%lld",&h);
    
    
    printf("Enter the unsigned long long int:");
    scanf("%llu",&i);
    
    
    printf("\n========== You entered ==========\n");
    printf("int=%d\n",a);
    printf("unsigned int=%u\n",z);
    printf("float=%f\n",b);
    printf("char=%c\n",c);
    printf("double=%lf\n",d);
    printf("short=%hd\n",e);
    printf("unsigned short=%hu\n",k);
    printf("Long=%ld\n",f);
    printf("unsigned long=%lu\n",g);
    printf("long=%lu\n",g);
    printf("unsigned long long int=%llu\n",g);
    
    
    return 0;
}
