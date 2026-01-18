#include <iostream>

using namespace std;

void piramid(int);

int main(int argc, char const *argv[])
{
    piramid(4);
    return 0;
}

void piramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
