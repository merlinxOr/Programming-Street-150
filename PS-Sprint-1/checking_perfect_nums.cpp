#include <iostream>

using namespace std;

bool is_perfect(int);

int main(int argc, char const *argv[])
{

    cout << (is_perfect(28) ? "Perfect" : "Not perfect!") << endl;
    return 0;
}

bool is_perfect(int num)
{
    int sum = 0;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return num == sum;
}
