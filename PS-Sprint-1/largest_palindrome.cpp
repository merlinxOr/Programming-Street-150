#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string reverse(string);
void palindrome(string);

int main(int argc, char const *argv[])
{
    palindrome("babad");
    palindrome("anitalavalatina");

    return 0;
}

string reverse(string str)
{

    string reversed = str;

    int i = 0;
    int j = str.length() - 1;

    while (i < j)
    {
        char temp = reversed[i];
        reversed[i++] = reversed[j];
        reversed[j--] = temp;
    }

    return reversed;
}

void palindrome(string str)
{
    string check = "";

    vector<string> results;
    int size = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            check += str[j];

            if (reverse(check) == check && check.length() > 1)
            {
                if (check.length() > size)
                {
                    size = check.length();
                    results.clear();
                    results.push_back(check);
                }
                else if (check.length() == size)
                {
                    if (find(results.begin(), results.end(), check) == results.end())
                    {
                        results.push_back(check);
                    }
                }
            }
        }
        check = "";
    }

    for (string s : results)
    {
        cout << s << endl;
    }
}
