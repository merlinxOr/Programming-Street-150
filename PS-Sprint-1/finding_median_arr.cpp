#include <iostream>

using namespace std;

void sort(int *, int);

int main(int argc, char const *argv[])
{
    int arr[] = {3, 1, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);

    double median;
    if (size % 2 == 1)
    {
        median = arr[size / 2];
    }
    else
    {
        median = (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }

    cout << median << endl;

    return 0;
}

void sort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
