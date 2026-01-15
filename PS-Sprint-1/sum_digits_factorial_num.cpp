#include <iostream>

using namespace std;

int sum_factorial(int);

int main(int argc, char const *argv[])
{
    cout << sum_factorial(4) << endl;
    cout << sum_factorial(6) << endl;
    return 0;
}

int sum_factorial(int num)
{
    int result = 1;
    for (int i = num; i > 0; i--)
    {
        result *= i;
    }

    int sum = 0;

    while (result != 0)
    {
        int digit = result % 10;
        sum += digit;
        result /= 10;
    }

    return sum;
}
