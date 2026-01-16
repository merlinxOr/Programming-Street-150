#include <iostream>

using namespace std;

bool is_perfect_square(int);

int main(int argc, char const *argv[])
{
    cout << (is_perfect_square(16) ? "Perfect square!" : "Not perfect sqare") << endl;
    cout << (is_perfect_square(15) ? "Perfect square!" : "Not perfect sqare") << endl;
    return 0;
}

bool is_perfect_square(int num)
{
    int i = 1;
    while (i * i <= num)
    {
        if (i * i == num)
            return true;
        i++;
    }
    return false;
}
