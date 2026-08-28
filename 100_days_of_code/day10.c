# include <stdio.h>
// converting total seaconds into hours:minutes:seconds
int main()
{
    int total_seaconds, hours, minutes, seconds;
    printf("Enter time in seaconds:");
    scanf("%d", &total_seaconds);

    hours = total_seaconds / 3600;
    minutes = ( total_seaconds % 3660 ) / 60;
    seconds = total_seaconds % 60;

    printf( "%02d:%02d:%02d", hours, minutes, seconds );
    return 0;
}