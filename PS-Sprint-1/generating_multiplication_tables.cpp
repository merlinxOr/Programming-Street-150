#include <iostream>

using namespace std;

void generate_table(int);

int main(int argc, char const *argv[])
{
    generate_table(4);
    return 0;
}

void generate_table(int num)
{
    int result = 1;
    for (int i = 1; i <= 10; i++)
    {
        result = num * i;
        cout << num << " x " << i << " = " << result << endl;
    }
}
