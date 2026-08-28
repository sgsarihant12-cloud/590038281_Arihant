// Calculating the area and Circumference of the circle
# include <stdio.h>
int main()
{
    float pi = 3.14;
    int r;
    float area, circumference;
    printf("Enter r:");
    scanf("%d", &r);

    area = pi * r * r;
    circumference = 2 * pi * r;

    printf("Area is = %.2f", area);
    printf("Circumference is = %.2f", circumference);
    return 0;
}