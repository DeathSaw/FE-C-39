#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Ice";
    char target[10];
    strcpy(target,source);
    printf("source string = %s\n",source);
    printf("target string = %s\n",target);
    return 0;
    
}


/**************************************
OUTPUT
source string = Ice
target string = Ice
***************************************/
