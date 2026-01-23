#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        int val = i;
        for (int j = 0; j < n; j++)
        {
            val = (val % 2 == 0) ? 1 : 0;
            cout << val;
        }
        cout << endl;
    }

    return 0;
}
