#include <iostream>

using namespace std;

int sum(int *, int);

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << sum(arr, size) << endl;

    return 0;
}

int sum(int *arr, int size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result += arr[i];
    }

    return result;
}
