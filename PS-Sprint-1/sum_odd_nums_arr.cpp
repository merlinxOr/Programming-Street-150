#include <iostream>

using namespace std;

bool is_odd(int);
int sum_odd(int *, int);

int main(int argc, char const *argv[])
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << sum_odd(arr, size) << endl;

    return 0;
}

bool is_odd(int num)
{
    return (num % 2 != 0);
}

int sum_odd(int *arr, int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        if (is_odd(arr[i]))
        {
            result += arr[i];
        }
    }

    return result;
}
