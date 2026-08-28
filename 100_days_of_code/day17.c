# include <stdio.h>
# include <math.h>
int main()
{
    int a, b, c;
    int roots;
    printf("Enter a");
    printf("Enter b");
    printf("Enter c");
    scanf("%d %d %d", &a, &b, &c);

    roots = pow( b, 2 ) - 4 * a * c;
    if( roots > 0 ){
        printf(" roots are real and district: ", roots);
        }
        if( roots < 0){
            printf(" roots are real and imaginary: ", roots);
        }
        if( roots = 0 ){
            printf(" roots are complex: ", roots);
        }
        return 0;
    }