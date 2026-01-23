#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 3;

    for (int i = 0; i < n; i++)
    {
        int val = i + 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            val = (j < (2 * i + 1) / 2 + 1) ? val += 1 : val -= 1;

            cout << val - 1;
        }
        cout << endl;
    }

    return 0;
}
