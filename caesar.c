#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MODC 26
#define ASCUP 65
#define ASCLO 97

int main(int argc, string argv[])
{
    // error if more or less than one command line argument 
    if (argc != 2)
    {
        printf("Error. Usage: ./caesar key\n");
        return 1;
    }
    
    // making sure command line argument string is valid
    if (argv[1] != NULL)
    {
    
        // converts key from a string to an integer
        int k = atoi(argv[1]);
    
        // get plaintext from user
        printf("plaintext: ");
        string p = get_string();
    
        // making sure entered string is valid
        if (p != NULL)
        {
            printf("ciphertext: ");
            // going throught the string one character at a time
            for (int i = 0, n = strlen(p); i < n; i++)
            {
                // if character is an alphabet
                if (isalpha(p[i]))
                {
                    // if alphabet is uppercase
                    if (isupper(p[i]))
                    {
                        p[i] = (p[i] - ASCUP + k) % MODC;
                        printf("%c", p[i] + ASCUP);
                    }
                    // if alphabet is lowercase
                    else
                    {
                        p[i] = (p[i] - ASCLO + k) % MODC;
                        printf("%c", p[i] + ASCLO);
                    }
                
                }
                // if not an alphabet, print as it is
                else
                    printf("%c", p[i]);
            }
            // print a new line at the end
            printf("\n");
        }
    }
}