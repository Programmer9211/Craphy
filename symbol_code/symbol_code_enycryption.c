#include <stdio.h>
#include <ctype.h>


void symbolCodeEncryption() {

    char encryptValue[27] = {'`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '|', '/', ',', '.', '<', '>', '?', '*', '{', '}', '[', ']'};

    char alphabetValue[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};

    char string[100], encryptedString[100], chr, escape;

    scanf("%c", &escape);

    printf("\n\nEnter Your Text : ");

    gets(string);

    for (int i = 0; string[i] != '\0'; ++i)
    {
        chr = tolower(string[i]);

        for (int j = 0; j < 27; j++)
        {
            if(chr == alphabetValue[j]) {

                encryptedString[i] = encryptValue[j];

            }
        }
        
    }

     printf("\n\nEncrypted String : %s", encryptedString);
    
}