#include <iostream>

using namespace std;

bool is_anagram(string, string);

int main(int argc, char const *argv[])
{
    cout << (is_anagram("casa", "hotel") ? "Is anagram" : "Not anagram") << endl;
    cout << (is_anagram("listen", "silent") ? "Is anagram" : "Not anagram") << endl;
    cout << (is_anagram("abc", "ABC") ? "Is anagram" : "Not anagram") << endl;

    return 0;
}

bool is_anagram(string str_1, string str_2)
{
    if (str_1.length() != str_2.length())
    {
        return false;
    }

    int i_str_1[26] = {0};
    int i_str_2[26] = {0};

    for (int i = 0; i < str_1.length(); i++)
    {
        if (str_1[i] < 'a' || str_1[i] > 'z')
        {
            return false;
        }

        i_str_1[str_1[i] - 'a']++;
    }

    for (int i = 0; i < str_2.length(); i++)
    {
        if (str_1[i] < 'a' || str_1[i] > 'z')
        {
            return false;
        }
        i_str_2[str_2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (i_str_1[i] != i_str_2[i])
        {
            return false;
        }
    }

    return true;
}
