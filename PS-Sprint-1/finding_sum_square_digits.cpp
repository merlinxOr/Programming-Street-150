#include <iostream>

using namespace std;

int sum_square(int);

int main(int argc, char const *argv[])
{
    cout << sum_square(123) << endl;
    return 0;
}

int sum_square(int num)
{

    int sum = 0;

    while (num != 0)
    {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }

    return sum;
}
