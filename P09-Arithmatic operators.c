#include<stdio.h>
int main()
{
    int a,b;
    float c;
    a=5;
    b=2;
    c=a+b;
    printf("Sum of %d and %d is %f\n ",a,b,c);
    
    c=a*b;
    printf("Product of %d and %d is %.2f\n",a,b,c);
     
    c=a/b;
    printf("Integer division of %d and %d is %f\n",a,b,c);
    
    c=(float)a/b;
    printf("Real Division of %d and %d is %f\n",a,b,c);
}



/**********************************************************************
OUTPUT

Sum of 5 and 2 is 7.000000
Product of 5 and 2 is 10.00
Integer division of 5 and 2 is 2.000000
Real Division of 5 and 2 is 2.500000
**********************************************************************/
