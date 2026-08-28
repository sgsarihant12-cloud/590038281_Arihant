# include <stdio.h>
int main()
{
    int a1;
    int a2;
    int a3;
    
    printf("Enter a1\n");
    printf("enter a2\n");
    printf("Enter a3\n");
    scanf("%d %D %d", &a1, &a2, &a3);

    if( ( a1 == a2 ) && ( a2 == a3 )){
        printf("Equilateral Triangle:");
    }
    else if ( ( a1 == a2 ) || ( a2 == a3 ) || ( a3 == a1 )){
        printf("Isocsceles Triangle:");
        }
        else {
            printf("Scalene Triangle:");
        }
        return 0;
}