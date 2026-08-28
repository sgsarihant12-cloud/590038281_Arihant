//Find the sum of first n natural number
# include <stdio.h>
int main()
{
    int sum = 0, n;
    printf("Enter n:");
    scanf("%d", &n);

    for ( int i = 0; i <= n; i++ ){
        sum = sum + i;
    }

        printf("Sum is = %d", sum);
        return 0;
    }