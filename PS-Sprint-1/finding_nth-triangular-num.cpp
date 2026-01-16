#include <iostream>

using namespace std;

int triangular_sum(int);

int main(int argc, char const *argv[])
{
    cout << triangular_sum(4) << endl;
    cout << triangular_sum(5) << endl;
    cout << triangular_sum(6) << endl;
    return 0;
}

int triangular_sum(int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += i + 1;
    }

    return sum;
};
