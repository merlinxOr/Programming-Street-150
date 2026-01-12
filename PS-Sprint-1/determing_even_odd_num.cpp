#include <stdio.h>

bool is_even(int);

int main(int argc, char const *argv[])
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrSize; i++)
    {
        printf("> %d is %s\n", arr[i], is_even(arr[i]) ? "Even" : "Odd");
    }

    return 0;
}

bool is_even(int num)
{
    return (num % 2 == 0);
}