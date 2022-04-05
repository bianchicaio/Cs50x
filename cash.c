#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{

    // Ask the input for a float;

    float n;

    do
    {
        n = get_float("Chamge owed: \n");
    }
    while (n < 0);


    // Total number of Cents that were input

    int total_cents = round(n * 100);

    // Tell computer what coins are

    int quarter = 25;

    int dime = 10;

    int nickle = 5;

    int penny = 1;

    // Track the number of coins needed

    int coins = 0;

    while (total_cents > 0)
    {

        coins = total_cents / 25;
        total_cents = total_cents % 25;

        coins = coins + (total_cents / 10);
        total_cents = total_cents % 10;

        coins = coins + (total_cents / 5);
        total_cents = total_cents % 5;

        coins = coins + total_cents;
        total_cents = 0;

    }
    printf("%i", coins);

}