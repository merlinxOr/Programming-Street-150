#include <stdio.h>
#include <math.h>

bool is_armstrong(int);

int main(int argc, char const *argv[])
{
    unsigned int num = 153;

    printf("%d is %s\n", num, is_armstrong(num) ? "Armstrong num" : "not Armstrong num");

    return 0;
}

bool is_armstrong(int num)
{

    if (num < 0)
    {
        return false;
    }

    if (num < 10)
    {
        return true;
    }

    int length = 0;
    int value = num;
    int result = 0;

    while (value != 0)
    {
        value /= 10;
        length++;
    }

    value = num;

    while (value > 0)
    {
        int digit = value % 10;
        result += pow(digit, length);
        value /= 10;
    }

    return (result == num);
}
