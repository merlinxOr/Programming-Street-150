#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int mode(int *, int);

int main(int argc, char const *argv[])
{
    int arr[12] = {1, 2, 2, 8, 8, 8, 8, 8, 3, 4, 4, 4};

    cout << mode(arr, 12) << endl;
    return 0;
}

int mode(int *arr, int size)
{
    if (size == 0)
    {
        return -1;
    }

    unordered_map<int, int> freq;

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    int maxfreq = 0;
    int modeValue = arr[0];

    for (const auto &value : freq)
    {
        if (value.second > maxfreq)
        {
            maxfreq = value.second;
            modeValue = value.first;
        }
    }

    return modeValue;
}
