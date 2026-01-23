#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        int coef = 1;
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << coef << " ";
            coef = coef * (i - j) / j;
        }

        cout << endl;
    }

    return 0;
}
