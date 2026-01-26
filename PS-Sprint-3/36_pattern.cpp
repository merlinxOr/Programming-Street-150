#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ((i + j) % 2 == 0 ? "X " : "O ");
        }
        cout << endl;
    }

    return 0;
}
