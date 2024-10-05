#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define CHAR_SIZE 100
#define ALPHABET_SIZE 26
int main(void)
{
    char input_string[CHAR_SIZE] = { 0 };
    int counter[ALPHABET_SIZE] = { 0 };

    printf("Please enter a string: ");
    fgets(input_string, CHAR_SIZE, stdin);
    input_string[strcspn(input_string, "\n")] = '\0';


    for (int i = 0; i < strlen(input_string); i++)
    {
        char ch = tolower(input_string[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            counter[ch - 'a']++;
        }
    }
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (counter[i] > 0)
        {
            printf("'%c' : %d\n", i + 'a', counter[i]);
        }
    }

}
