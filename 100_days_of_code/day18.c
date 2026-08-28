# include <stdio.h>
int main()
{
    int g;
    printf("Enter you percentage:");
    scanf("%d", &g);

    if( g >= 90 && g <= 100){
        printf("Grade A");
    }
        else if( g >= 80 && g <= 89 ){
            printf("Grade B");
        }
        else if( g >= 70 && g <= 79 ){
            printf("Grade C");
        }
        else if( g >= 60 && g <= 69 ){
            printf("Grade D");
        }
        else{
            printf("Grade F");
        }
        return 0;
    }