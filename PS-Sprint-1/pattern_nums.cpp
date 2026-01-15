#include <iostream>

using namespace std;

void pattern(int);

int main(int argc, char const *argv[])
{
    pattern(8);
    return 0;
}

void pattern(int row)
{
    int num = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}
