#include <iostream>

using namespace std;

int length(string);

int main(int argc, char const *argv[])
{
    cout << length("hello") << endl;
    return 0;
}

int length(string str)
{
    int size = 0;

    while (str[size] != '\0')
    {
        size++;
    }

    return size;
}
