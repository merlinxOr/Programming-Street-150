#include <stdio.h>

#define LIMIT 10

void fibonacci(int);

int main(int argc, char const *argv[])
{

    fibonacci(LIMIT);

    return 0;
}

void fibonacci(int limit)
{
    if (limit < 0)
        return;

    int a = 0, b = 1;

    if (limit >= 0)
        printf("%d ", a);
    if (limit >= 1)
        printf("%d ", b);

    while (a + b <= limit)
    {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}
