#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2 + 1; j++)
        {
            if (i == 0 || i == n - 1 || j == n / 2 + 1 - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
