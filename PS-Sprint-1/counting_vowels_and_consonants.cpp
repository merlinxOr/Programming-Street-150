#include <iostream>
#include <string.h>
#include <unordered_set>

using namespace std;

void counting_vowels_consonants(string);

int main(int argc, char const *argv[])
{
    counting_vowels_consonants("hello world");
    return 0;
}

void counting_vowels_consonants(string str)
{
    unordered_set<char> dict = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    int vowel = 0;
    int consonants = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            if (dict.find(str[i]) != dict.end())
            {
                vowel++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "Vowels : " << vowel << endl;
    cout << "Consonants : " << consonants << endl;
}
