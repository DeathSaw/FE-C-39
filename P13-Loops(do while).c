#include <stdio.h>

int main()
{
    int x=0;
    int y=0;
    do
    {
        y=y+x;
        printf("%d\n",y);
        x++;
    }
    while(x<=10);
    return 0;
}

/****************************************
OUTPUT
0
1
3
6
10
15
21
28
36
45
55
******************************************/
