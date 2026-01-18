#include <iostream>

using namespace std;

int counting(int, int);

int main(int argc, char const *argv[])
{
    cout << counting(122333, 3) << endl;
    return 0;
}

int counting(int num, int digit)
{
    int count = 0;

    while (num != 0)
    {
        if (digit == num % 10)
        {
            count++;
        }

        num /= 10;
    }

    return count;
}
