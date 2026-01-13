#include <iostream>

using namespace std;

int sum(int);

int main(int argc, char const *argv[])
{
    cout << sum(1234) << endl;
    return 0;
}

int sum(int num)
{
    int result = 0;

    while (num != 0)
    {
        int digit = num % 10;
        result += digit;
        num /= 10;
    }

    return result;
}
