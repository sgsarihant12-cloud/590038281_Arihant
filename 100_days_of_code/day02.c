# include <stdio.h>
// Calculating the sum, difference, products, Quotient of two numbers
int main()
{
    int sum, difference, product, quotient;
    int a, b;
    printf("Enter a and b:");
    scanf("%d%d", &a, &b);

    sum = a + b;
    product = a * b;
    difference = a - b;
    quotient = a / b;

    printf(" Sum is = %d\n", sum);
    printf(" Difference is = %d\n", difference);
    printf(" Product is = %d\n", product);

    if( b != 0){
        printf(" Quotient is = %d\n", quotient);
    }
    else
    {
        printf("Quotient = Cannot defined");
    }
    return 0;
}