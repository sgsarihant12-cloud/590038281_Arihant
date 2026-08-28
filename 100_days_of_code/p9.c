# include <stdio.h>
# include <math.h>
// Calculating the Simple and Compound Interest
int main()
{
    int SP_Inter;
    float CP_Inter;
    int prin, rate, n;
    printf("Enter prin:");
    scanf("%d", &prin);

    printf("Enter rate:");
    scanf("%d", &rate);

    printf("Enter n:");
    scanf("%d", &n);

    SP_Inter = ( prin * rate * n ) / 100.0;
    CP_Inter = prin * ( pow ( 1 + ( rate / 100.0 ) , n ) - 1 );

    printf("Simple Interest is = %d\n", SP_Inter);
    printf("Compound Interest is = %.2f\n", CP_Inter);
    return 0;
}