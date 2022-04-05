#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("What is the starting population size? \n");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("What is the ending population size? \n");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int yrs = 0;

    if (start_size == end_size)
    {
        printf("Years: %i", yrs);
    }

    int curr_size = start_size;

    do
    {
        yrs = yrs + 1;
        curr_size += (curr_size / 3 - curr_size / 4);
    }
    while (curr_size < end_size);

    // TODO: Print number of years

    printf("Years: %i", yrs);
}