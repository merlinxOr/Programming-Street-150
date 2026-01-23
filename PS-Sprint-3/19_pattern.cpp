#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 3;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - i - 1;
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
