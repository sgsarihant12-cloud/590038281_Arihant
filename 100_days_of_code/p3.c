# include <stdio.h>
// Calculating the Area and Perimeter of the Rectangle
int main(){
    int area, perimeter;
    int length, breadth;
    printf("Enter Length and breadth:");
    scanf("%d%d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * ( length + breadth );

    printf("Area is = %d\n", area);
    printf("Perimeter is = %d\n", perimeter);
    return 0;
}
