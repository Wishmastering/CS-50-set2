#include <cs50.h>
#include <stdio.h>
#include <string.h> // Checks string length
#include <ctype.h> // Allows to use "isdigit" which checks if something is an int
#include <stdlib.h> // Allows "atoi" which converts string to int

int main(int argc, string argv[])
{
    // Here we check the case we have ONLY 2 argc
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1; // This is to QUIT the program
    }

    // Here we check the case argv[1] we ONLY GOT DIGITS
    for (int i = 0 ; i < strlen(argv[1]) ; i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1; // This is to QUIT the program
        }
    }

        int k = atoi(argv[1]);

        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int j = 0 ; j < strlen(plaintext) ; j++ )
        {
            // Here we check for uppercase scenario
            if(isupper(plaintext[j]))
            {
                printf("%c", (plaintext[j] + k - 65) % 26 + 65);
            }
            // Here we check for lowercase scenario
            else if(islower(plaintext[j]))
            {
                printf("%c", (plaintext[j] + k - 97) % 26 + 97);
            }
            // Here we check for ANY OTHER CASE
            else
            {
                printf("%c", plaintext[j]);
            }
        }
        printf("\n");
}


