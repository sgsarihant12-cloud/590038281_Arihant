# include <stdio.h>
int main()
{
    int days;
    printf("Enter the number of days from ( 1 to 7 )");
    scanf("%d", &days);

    switch ( days )
    {
    case 1:
    printf( "Monday" );
    break;

    case 2:
    printf( "Tuesday" );
    break;

    case 3:
    printf( "Wednesday" );
    break;

    case 4: 
    printf( "Thursday" );
    break;

    case 5:
    printf( "Friday" );
    break;

    case 6: 
    printf( "Saturady" );
    break;

    case 7:
    printf( "Sunday" );
    break;

    default:
    printf( "Invalid day number: " );
    }
    return 0;
}