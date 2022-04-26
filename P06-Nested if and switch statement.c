int main()
{
    int x,y;
    printf("Enter a number between 0 to 39: ");
    scanf("%d",&y);
    
    if (y/10==0)
    {
        printf("you have entered the number in the range of 0 to 9\n");
    }
    else if(y/10==1)
    {
        printf("you have entered the number in the range of 10 to 19\n");
    }
    else if (y/10==2)
    {
        printf("you have entered number in the range of 20-29\n");
    }
    else if (y/10==3)
    {
        printf("you have entered number in the range 30-39\n");
    }
    else
    {
        printf("The number not in range\n");
    }
    return 0;
}

/*****************************************************
Output
Enter a number between 0 to 39: 12
you have entered the number in the range of 10 to 19
*****************************************************/
