#include <iostream>

using namespace std;

void generate_pascal(int);

int main(int argc, char const *argv[])
{
    generate_pascal(4);
    return 0;
}

void generate_pascal(int size)
{
    for (int i = 1; i <= size; i++)
    {
        int coef = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << coef << " ";
            coef = coef * (i - j) / j;
        }
        cout << endl;
    }
}
