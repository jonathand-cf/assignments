#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define CHAR_SIZE 100

char theWordIs[CHAR_SIZE] = {0};

void string_upper()
{
    for (int i = 0; i < CHAR_SIZE; i++)
        theWordIs[i] = (char)toupper(theWordIs[i]);
    printf("The word in uppercase is '%s'", theWordIs);
}
void string_lower()
{
    for (int i = 0; i < CHAR_SIZE; i++)
        theWordIs[i] = (char)tolower(theWordIs[i]);
    printf("The word in lowercase is '%s'", theWordIs);
}

int main(void)
{
    int len = 0;
    do
    {
        fgets(theWordIs, CHAR_SIZE, stdin);
        if (len % 2 != 0)
        {
            printf("This program does not support odd number of characters.\n Try again: ");
        }
    } while (len % 2 != 0);

    string_upper(theWordIs);
    string_lower();
    len = strlen(theWordIs);
    if (theWordIs[len - 1] == '\n')
    {
        theWordIs[len - 1] = '\0';
        len--;
    }
    if (len > 0)
    {
        int mid1 = (len / 2) - 1;
        int mid2 = len / 2;
        printf("Middle characters: %c - %c\n", theWordIs[mid1], theWordIs[mid2]);
    }
    else
        printf("error");
    return 0;
}