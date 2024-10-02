#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CHAR_SIZE 100

char theWord[CHAR_SIZE] = { 0 };
void is_palindrome(char *theWord)
{
    int left = 0;
    int right = strlen(theWord) - 1;
    while (left <= right)
    {
        if (theWord[left] != theWord[right])
        {
            printf("\"%s\" is not palindrome.\n", theWord);
            return;
        }
        left++;
        right--;
    }
    printf("\"%s\" is palindrome.\n", theWord);

}
void string_reverse(char* theWord)
{
    int first = 0;
    int last = strlen(theWord) - 1;
    char what;
    while (first <= last)
    {
        what = theWord[first];
        theWord[first] = theWord[last];
        theWord[last] = what;
        first++;
        last--;
    }
}
int main(void)
{
    gets(theWord);
    size_t length = strlen(theWord);
    printf("The word contains %zu letters\n", length);
    is_palindrome(theWord);
    string_reverse(theWord);
    printf("The word reversed is '%s'", theWord);
    return 0;
}