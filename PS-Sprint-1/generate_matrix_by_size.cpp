#include <iostream>

using namespace std;

void generate_matrix(int);

int main(int argc, char const *argv[])
{
    generate_matrix(3);
    return 0;
}

void generate_matrix(int size)
{
    int j = 1;

    for (int i = 0; i < size; i++)
    {
        int n = size;
        while (n != 0)
        {
            cout << j++ << " ";
            n--;
        }
        cout << endl;
    }
}
