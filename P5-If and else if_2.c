#include <stdio.h>
int main()
{
    int a, b,sum;
    printf("Enter the value of a and b \n");
    scanf("%d%d",&a,&b);
    sum = a + b;
    printf("Sum of a and b is %d\n", sum);
    if(sum>20)
    {
        printf("Sum is greater than 20 \n");
    }
    /*else if(sum>10)
    {
        printf("Sum is greater than 10 and less than 20\n");
    }
    else 
    {
        printf("Sum is less than 10 \n");
    }*/
    return 0;
}


/********************************************************************************** 
Output

Enter the value of a and b 
6
6
Sum of a and b is 12
Sum is greater than 10 and less than 20
*************************************************************************************/
