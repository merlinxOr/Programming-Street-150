#include <iostream>

using namespace std;

void sorting(int *, int);

int main(int argc, char const *argv[])
{
    int arr[] = {3, 1, 4, 1, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    sorting(arr, size);

    for (int j = 0; j < size; j++)
    {
        printf("%d", arr[j]);
    }
    printf("\n");

    return 0;
}

// Bubble sort
void sorting(int *arr, int size)
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
