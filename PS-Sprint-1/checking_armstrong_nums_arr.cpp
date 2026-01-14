#include <iostream>

using namespace std;

int *armstrong(int *, int, int &);
bool isArmstrong(int);
int length_digit(int);

int main(int argc, char const *argv[])
{
    int arr[500];
    int j = 0;

    for (int i = 1; i <= 500; i++)
    {
        arr[j++] = i;
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    int resultSize;
    int *armstrongNumbers = armstrong(arr, size, resultSize);

    for (int i = 0; i < resultSize; i++)
    {
        cout << armstrongNumbers[i] << " ";
    }
    cout << endl;

    delete[] armstrongNumbers;

    return 0;
}

bool isArmstrong(int num)
{
    if (num < 0)
        return false;

    int original = num;
    int sum = 0;
    int n = length_digit(num);

    while (num != 0)
    {
        int digit = num % 10;
        int power = 1;
        for (int i = 0; i < n; i++)
        {
            power *= digit;
        }
        sum += power;
        num /= 10;
    }

    return sum == original;
}

int *armstrong(int *arr, int size, int &resultSize)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (isArmstrong(arr[i]))
        {
            count++;
        }
    }

    int *result = new int[count];
    resultSize = count;

    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (isArmstrong(arr[i]))
        {
            result[j++] = arr[i];
        }
    }

    return result;
}

int length_digit(int num)
{
    if (num == 0)
        return 1;

    if (num < 0)
        num = -num;

    unsigned int count = 0;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    return count;
}
