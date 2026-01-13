#include <iostream>

using namespace std;

int factorial(int);

int main(int argc, char const *argv[])
{
    cout << factorial(5) << endl;
    return 0;
}

int factorial(int num)
{
    if (num < 0)
        return -1;

    int result = 1;

    for (int i = num; i >= 1; i--)
    {
        result *= i;
    }

    return result;
}