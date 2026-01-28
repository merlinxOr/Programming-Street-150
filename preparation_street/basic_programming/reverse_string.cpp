/*
Removing Vowels to Find the Essence of a String
Easy

Problem Statement:
While working on a text-based game, you need to reverse strings entered by players for a secret code.
You decide to create a simple function that reverses any input string so that the game can process these secret messages.

Examples:
Input: string = "hello"
Output: "olleh"
Explanation: Reversing "hello" results in "olleh".

Input: string = "racecar"
Output: "racecar"
Explanation: "racecar" is a palindrome; reversing it results in the same string.

Input: string = "12345"
Output: "54321"
Explanation: Reversing "12345" results in "54321".
*/

#include <bits/stdc++.h>
using namespace std;

string reverse_string(string);

int main()
{
    cout << reverse_string("hello") << endl;
    cout << reverse_string("racecar") << endl;
    cout << reverse_string("12345") << endl;
    cout << reverse_string("programming") << endl;
    cout << reverse_string("a") << endl;
    return 0;
}

string reverse_string(string s)
{

    // Other options:
    // reverse(s.begin(), s.end());
    //
    // swap(s[i], s[s.length() - i - 1]);

    for (int i = 0; i < s.length() / 2; i++)
    {
        char temp = s[i];
        s[i] = s[s.length() - i - 1];
        s[s.length() - i - 1] = temp;
    }

    return s;
}