#include <iostream>

using namespace std;

bool is_narcissistic(int);

int main(int argc, char const *argv[])
{

    cout << (is_narcissistic(153) ? "Narcissistic number" : "Normal num") << endl;

    return 0;
}

bool is_narcissistic(int num)
{
    if (num < 1)
    {
        return false;
    }

    int n = num;
    int length = 0;
    int result = 0;

    while (n != 0)
    {
        n /= 10;
        length++;
    }

    n = num;

    for (int i = 0; i < length; i++)
    {
        int digit = n % 10;
        int pow = 1;

        for (int j = 0; j < length; j++)
        {
            pow *= digit;
        }
        n /= 10;
        result += pow;
    }

    return (num == result);
}
