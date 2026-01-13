#include <stdio.h>
#include <cstring>

bool is_palindrome(char *, char *);
char *reverse(char *);

int main(int argc, char const *argv[])
{
    char *str = "radar";
    char *str_reverse = reverse(str);

    printf("%s is %s\n", str, is_palindrome(str, str_reverse) ? "palindrome" : "not palindrome");

    return 0;
}

bool is_palindrome(char *original, char *reverse)
{
    return (strcmp(original, reverse) == 0);
}

char *reverse(char *str)
{
    char *reverse = new char[strlen(str) + 1];
    int j = 0;

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        reverse[j++] = str[i];
    }

    reverse[j] = '\0';

    return reverse;
}
