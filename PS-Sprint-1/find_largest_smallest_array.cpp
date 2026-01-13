#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {4, 7, 1, 8, 5};

    int szArr = sizeof(arr) / sizeof(arr[0]);

    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 0; i < szArr; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }

        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest: " << largest << ",  Smallest: " << smallest << endl;

    return 0;
}
