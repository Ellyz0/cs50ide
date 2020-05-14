#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int cent_owed, dollar_owed;
    do 
    {
        dollar_owed = get_float("Change owed: ");
        cent_owed = round(dollar_owed*100);
    }
    while(cent_owed <= 0);
    int quarters = cent_owed/25;
    int dimes = ( cent_owed % 25 ) / 10;
    int nickel = (( cent_owed % 25) % 10 ) / 5;
    int pennies = ((cent_owed % 25 ) % 10) % 5;

    printf( "%d\n", quarters + dimes + nickel + pennies);
}
