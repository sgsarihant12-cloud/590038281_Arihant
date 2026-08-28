# include <stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d", &n);

    if( n % 2 == 0 ){
        printf("The given number is the even number:");
    }
    else{
        printf("The given number is the odd number:");
    }
    return 0;
}