#include <iostream>

using namespace std;

void fibonacci(int);

int main(int argc, char const *argv[])
{

    fibonacci(5);
    fibonacci(13);

    return 0;
}

void fibonacci(int limit)
{
    int a = 0;
    int b = 1;
    int sum = 0;

    while (1)
    {
        if (sum == limit)
        {
            break;
        }

        if (sum <= 1)
        {
            cout << a << " ";
        }

        sum = a + b;
        a = b;
        b = sum;
        cout << sum << " ";
    }
    cout << endl;
}
