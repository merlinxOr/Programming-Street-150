#include <iostream>

using namespace std;

bool is_prime(int);
void prime(int);

int main(int argc, char const *argv[])
{
    prime(20);
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

void prime(int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        if (is_prime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
