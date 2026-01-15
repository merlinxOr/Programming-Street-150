#include <iostream>

using namespace std;

int missing_num(int *, int);

int main(int argc, char const *argv[])
{
    int arr[4] = {1, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << missing_num(arr, size) << endl;
    return 0;
}

int missing_num(int *arr, int size)
{
    int j = 0;
    for (int i = 1; i <= size; i++)
    {
        if (arr[j++] != i)
        {
            return i;
        }
    }

    return -1;
}