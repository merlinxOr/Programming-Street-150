#include <iostream>

using namespace std;

int lcm(int, int);

int main(int argc, char const *argv[])
{
    cout << lcm(12, 15) << endl;
    cout << lcm(4, 6) << endl;
    cout << lcm(7, 13) << endl;
    cout << lcm(8, 12) << endl;
    return 0;
}

int lcm(int a, int b)
{

    if (a == b)
        return a;

    int result_a = a;
    int result_b = b;

    while (true)
    {
        if (result_a < result_b)
        {
            result_a += a;
        }
        else if (result_a > result_b)
        {
            result_b += b;
        }
        else
        {
            return result_a;
        }
    }
}
