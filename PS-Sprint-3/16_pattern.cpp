#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        char ch = 'X';
        int val = i;
        for (int j = 0; j < n; j++)
        {
            val = (val % 2 == 0) ? 1 : 0;
            ch = (val == 1) ? 'X' : 'O';
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
