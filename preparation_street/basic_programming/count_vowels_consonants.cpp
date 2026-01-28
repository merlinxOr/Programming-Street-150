/*
Calculating the GCD to Uncover the Greatest Common Factor
Easy

Problem Statement:
You receive a mysterious message. To decode its tone—whether it's a whisper of vowels or a march of consonants—you must count how many vowels and consonants it contains.

Examples:
Input: string = hello world
Output: Vowels: 3, Consonants: 7
Explanation: hello world contains 3 vowels (e, o, o) and 7 consonants (h, l, l, w, r, l, d).

Input: string = programming
Output: Vowels: 3, Consonants: 8
Explanation: programming contains 3 vowels (o, a, i) and 8 consonants (p, r, g, r, m, m, n, g).

Input: string = openai
Output: Vowels: 4, Consonants: 2
Explanation: openai contains 4 vowels (o, e, a, i) and 2 consonants (p, n).
*/

#include <bits/stdc++.h>
using namespace std;

void count_vowels_consonants(const string &);

int main()
{
    count_vowels_consonants("hello world");
    count_vowels_consonants("programming");
    count_vowels_consonants("openai");
    count_vowels_consonants("test case");
    count_vowels_consonants("a e i o u");
    return 0;
}

void count_vowels_consonants(const string &s)
{
    int vowel = 0;
    int consonants = 0;

    for (char ch : s)
    {
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowel++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowel << ", Consonants: " << consonants << endl;
}