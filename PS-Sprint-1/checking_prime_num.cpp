#include <stdio.h>

bool is_prime(int);

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 100; i++)
    {
        printf("> %d is %s\n", i, is_prime(i) ? "Prime" : "Not prime");
    }

    return 0;
}

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}
