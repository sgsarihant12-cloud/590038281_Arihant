# include <stdio.h>
// Swapping of two numbers using three variables
int main(){
    int i, j, temp;
    printf("Enter i and j:");
    scanf("%d%d", &i, &j);

    temp = i;
    i = j;
    j = temp;

printf("After swapping = %d %d", i, j);
return 0;
}
