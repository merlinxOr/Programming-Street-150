#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        cout << string(n, '*') << endl;
    }

    return 0;
}
