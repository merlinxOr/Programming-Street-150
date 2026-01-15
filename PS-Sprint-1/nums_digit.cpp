#include <iostream>

using namespace std;

int count_digits(int);

int main(int argc, char const *argv[])
{
    cout << count_digits(12345) << endl;
    return 0;
}

int count_digits(int num)
{
    int size = 0;

    while (num != 0)
    {
        num /= 10;
        size++;
    }

    return size;
}
