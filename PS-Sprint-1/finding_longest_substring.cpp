#include <iostream>
#include <unordered_set>

using namespace std;

string sliding_window(string);

int main(int argc, char const *argv[])
{
    cout << sliding_window("abcabcbb") << endl;
    return 0;
}

string sliding_window(string str)
{
    if (str.empty())
    {
        return "";
    }

    unordered_set<char> seen;
    int left = 0, maxLength = 0, start = 0;

    for (int right = 0; right < str.size(); right++)
    {
        while (seen.count(str[right]))
        {
            seen.erase(str[left]);
            left++;
        }
        seen.insert(str[right]);

        int currentLength = right - left + 1;
        if (currentLength > maxLength)
        {
            maxLength = currentLength;
            start = left;
        }
    }

    return str.substr(start, maxLength);
}
