#include <iostream>

using namespace std;

int is_gcd(int, int);

int main(int argc, char const *argv[])
{
    cout << is_gcd(48, 18) << endl;
    return 0;
}

int is_gcd(int a, int b)
{
    while (true)
    {
        int remainder = a % b;
        if (remainder == 0)
        {
            return b;
        }
        a = b;
        b = remainder;
    }
}
