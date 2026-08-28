# include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter any number:");
    scanf("%d", &n);

    for( i = 1; i <= 2 * n; i = i + 2 )
    {
            sum = sum + i;
    }
    printf( "%d", sum );
    return 0;
}

