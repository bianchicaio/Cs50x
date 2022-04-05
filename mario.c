
int main(void)
{

    // ASK FOR THE HEIGHT OF THE PYRAMID

    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);


    //MAKE THE PYRAMID

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n + 2; j++)
        {


            if (j == n || j == n+1 || i + j < n-1 || j>i+n+2)



            printf(" ");



            else


            printf("#");


        }

        printf("\n");
    }
}