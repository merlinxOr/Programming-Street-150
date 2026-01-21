#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        cout << string(i, '*') << endl;
    }

    return 0;
}
