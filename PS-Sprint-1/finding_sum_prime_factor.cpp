#include <iostream>

using namespace std;

bool is_prime(int);
int sum_factors(int);

int main(int argc, char const *argv[])
{
    cout << sum_factors(12) << endl;
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

int sum_factors(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && is_prime(i))
        {
            sum += i;
        }
    }

    return sum;
}
