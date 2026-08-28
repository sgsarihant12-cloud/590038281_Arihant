# include <stdio.h>
int main()
{
    int profit, CP, SP, loss ,profit_percent, loss_percent;
    printf("Enter CP & SP:");
    scanf( "%d %d", &CP, &SP );

    if ( SP > CP ){

    profit = SP - CP;
    profit_percent = ( profit * 100 ) / CP;
    printf( "Profit = %d", profit_percent );
    }
    else if ( SP < CP ){
        loss = CP - SP;
        loss_percent = ( loss * 100 ) / SP;
        printf( "Loss = %d", loss_percent );
    }
    else{
        printf("No profit no loss:");
    }
    return 0;
}

