#include <iostream>

using namespace std;

int average(int *, int);

int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << average(arr, 5) << endl;
    return 0;
}

int average(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}
