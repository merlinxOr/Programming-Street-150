#include <iostream>

using namespace std;

bool is_prime(int);
int sum_prime(int *, int);

int main(int argc, char const *argv[])
{

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    cout << sum_prime(arr, 10) << endl;
    return 0;
}

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int sum_prime(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (is_prime(arr[i]))
        {
            sum += arr[i];
        }
    }

    return sum;
}