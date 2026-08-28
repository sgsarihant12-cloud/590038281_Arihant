/*Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
# include <stdio.h>
# include <math.h>
int main()
{
    int n, num, sum = 0, d;
    printf("Enter any number:");
    scanf("%d", &n);
    num = n;

    while (n != 0)
    {
        d = n % 10;
        sum += pow(d, 3);
        n = n / 10;
    }
    if( sum == num )
    {
    printf("Armstrong number:");
    }
    else {
        printf("Not Armstrong number:");
    }
    return 0;
}