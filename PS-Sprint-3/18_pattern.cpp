#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
            {
                cout << num++;
            }
            else
            {
                if (j == 0 || j == n - 1)
                {
                    cout << num;
                }
                else
                {
                    cout << " ";
                }
            }
        }

        cout << endl;

        num = 1;
    }

    return 0;
}
