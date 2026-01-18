#include <iostream>

using namespace std;

void divisors(int);

int main(int argc, char const *argv[])
{
    divisors(12);
    return 0;
}

void divisors(int num)
{
    int n = num;
    while (n != 0)
    {
        if (num % n == 0)
        {
            cout << n << " ";
        }

        n--;
    }
}
