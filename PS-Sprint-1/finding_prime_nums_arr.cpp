#include <iostream>

using namespace std;

bool is_prime(int);
int *finding_primes(int *, int, int &);

int main(int argc, char const *argv[])
{
    int arr[20];
    int j = 0;

    for (int i = 10; i <= 30; i++)
    {
        arr[j++] = i;
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    int resultSize;

    int *nums_primes = finding_primes(arr, size, resultSize);

    for (int i = 0; i < resultSize; i++)
    {
        cout << nums_primes[i] << " ";
    }
    cout << endl;

    delete[] nums_primes;

    return 0;
}

bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int *finding_primes(int *arr, int size, int &resultSize)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (is_prime(arr[i]))
        {
            count++;
        }
    }

    resultSize = count;

    int *result = new int[count];
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (is_prime(arr[i]))
        {
            result[j++] = arr[i];
        }
    }

    return result;
}
