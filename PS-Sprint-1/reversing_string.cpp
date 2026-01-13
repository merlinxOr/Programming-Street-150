#include <iostream>
#include <string.h>

using namespace std;

string reversing(string);

int main(int argc, char const *argv[])
{

    cout << reversing("programming") << endl;

    return 0;
}

string reversing(string str)
{
    string reverse = str;

    int len = str.length() - 1;

    for (int i = 0; i < str.length() / 2; i++, len--)
    {
        reverse[len] = str[i];
        reverse[i] = str[len];
    }

    return reverse;
}
