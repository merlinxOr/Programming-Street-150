#include <iostream>

using namespace std;

bool is_even(int);
int sum_even(int *, int);

int main(int argc, char const *argv[])
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << sum_even(arr, size) << endl;

    return 0;
}

bool is_even(int num)
{
    return (num % 2 == 0);
}

int sum_even(int *arr, int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        if (is_even(arr[i]))
        {
            result += arr[i];
        }
    }

    return result;
}
