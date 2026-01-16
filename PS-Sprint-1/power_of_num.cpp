#include <iostream>

using namespace std;

int power(int, int);

int main(int argc, char const *argv[])
{
    cout << power(2, 3) << endl;
    return 0;
}

int power(int base, int exponent)
{
    int pow = 1;

    while (exponent != 0)
    {
        pow *= base;
        exponent--;
    }

    return pow;
}
