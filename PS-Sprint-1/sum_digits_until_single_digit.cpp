#include <iostream>

using namespace std;

int sum_digits(int);

int main(int argc, char const *argv[])
{
    cout << sum_digits(9875) << endl;
    return 0;
}

int sum_digits(int num)
{
    if (num / 10 == 0)
    {
        return num;
    }

    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum_digits(sum);
}
