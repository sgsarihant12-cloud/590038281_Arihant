// Check whether it is Leap year or not 
# include <stdio.h>
int main()
{
    int y;
    printf("Enter year:");
    scanf("%d", &y);

    if( y % 400 == 0 )
    {
        printf("Leap Year");
    }
    else
        if( y % 100 == 0 )
        {
            printf("Not a Leap Year");
        }
    else if( y % 4 == 0 )
    {
        printf("Leap Year");
    }
    return 0;
}