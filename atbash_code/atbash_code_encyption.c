#include <stdio.h>


int main()
{   char string[100] = {0}, encrypted_text[100] = {0}, ch;
    
    char small_letter[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    
    char small_encrypt_letter[27] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a', ' '};
    
    char capital_letter[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' '};

    char capital_encrypt_letter[27] = {'Z', 'Y', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q', 'P', 'O', 'N', 'M', 'L', 'K', 'J', 'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A', ' '};
    
    printf("\n\nEnter Your Text: ");

    gets(string);

    for (int i = 0; string[i] != '\0'; ++i)
    {
        ch = string[i];

        for (int j = 0; j < 27; j++)
        {
            if(ch == small_letter[j]) 
            {

                encrypted_text[i] = small_encrypt_letter[j];

            }
            else if (ch == capital_letter[j] )
            {
               
               encrypted_text[i] = capital_encrypt_letter[j];

            }
            
        }
        
    }

    printf("\n\nEncrypted Text: %s", encrypted_text);
    return 0;
}