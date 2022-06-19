#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
   int i, j;
   printf("Enter the values ");
   scanf("%d %d", &i, &j);
   
   printf("Before swapping %d and %d\n" , i, j);
   
   swap(&i, &j);
   
   printf("After swapping %d and %d\n", i, j);
   return 0;
}


/***********************************

OUTPUT:
Enter the values 5
6
Before swapping 5 and 6
After swapping 6 and 5
***********************************/
