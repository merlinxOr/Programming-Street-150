#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            cout << string(n, '*');
        }
        else
        {
            cout << "*";
            for (int j = 1; j < n - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
