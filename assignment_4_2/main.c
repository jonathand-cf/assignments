#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define CHAR_SIZE 100

char theWordIs[CHAR_SIZE] = {0};
char originalWord[CHAR_SIZE] = {0};  // backup for splitte string
void string_split()
{
    int len = strlen(originalWord);
    int mid = len / 2;  // midten

    printf("The word split in two is '");

    for (int i = 0; i < mid; i++)
        printf("%c", originalWord[i]);
    printf(" - ");
    for (int i = mid; i < len; i++)
        printf("%c", originalWord[i]);

    printf("'\n");
}
void string_upper()
{
    for (int i = 0; i < CHAR_SIZE; i++)
        theWordIs[i] = (char)toupper(theWordIs[i]);
    printf("The word in uppercase is '%s'\n", theWordIs);
}
void string_lower()
{
    for (int i = 0; i < CHAR_SIZE; i++)
        theWordIs[i] = (char)tolower(theWordIs[i]);
    printf("The word in lowercase is '%s'\n", theWordIs);
}
int main(void)
{
    printf("Enter a word: ");
    fgets(theWordIs, CHAR_SIZE, stdin);

    // fjerner newline chars hvis d er der (fgets får det med)
    size_t len = strlen(theWordIs);
    if (theWordIs[len - 1] == '\n')
        theWordIs[len - 1] = '\0';

    strcpy(originalWord, theWordIs);
    string_upper(theWordIs);
    string_lower();
    string_split();

    return 0;
}