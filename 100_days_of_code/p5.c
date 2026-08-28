# include <stdio.h>
// Converting Celcius to Fahrenheit
int main()
{
    int C, F;
    printf("Enter C:");
    scanf("%d", &C);

    F = ( C * 9 / 5 ) + 32;
    printf("F = %d", F);
    return 0;
}