#include <stdio.h>
int a = 5;
int b = 2;
void add ()
{
    int sum;
    sum = a + b;
    printf("Sum of a and b is %d\n",sum);

}
int main()
{
    add();
    return 0;
}


/***********OUTPUT
Sum of a and b is 7 ******************/
