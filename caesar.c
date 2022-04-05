#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

bool check_valid_key(string s);
void encrypt(string plaintext, string ciphertext, int k);

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage ./caesar key\n");

        return 1;
    }

    int k = atoi(argv[1]);

    string s = get_string("plaintext: \n");

    int n = strlen(s);

    char ciphertext[n + 1];

    encrypt(s, ciphertext, k);

    printf("ciphertext: %s\n", ciphertext);

}

void encrypt(string plaintext, string ciphertext, int k)
{
    int i = 0;
    for (i = 0; i < strlen(plaintext); i++)
    {

        char ch = plaintext[i];
        if (isalpha(ch))
        {
            char temp = tolower(ch);

            int pi = temp - 'a';

            char ci = ((pi + k) % 26) + 'a';

            ciphertext[i] = islower(ch) ? ci : toupper(ci);

        }

        else
        {

            ciphertext[i] = ch;

        }

    }

    ciphertext[i] = '\0';


}

bool check_valid_key(string s)
{

    for (int i = 0; i < strlen(s); i++)
    {
        char ch = s[i];
        if (!isdigit(s[i]))
        {
            return false;
        }

    }
    return true;
}