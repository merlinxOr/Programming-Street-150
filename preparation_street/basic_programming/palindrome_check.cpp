/*
Reversing Strings Like a Coding Magician
Easy

Problem Statement:
You want to verify if a given string reads the same backward as forward — a palindrome.
To do this, you decide to write a program that compares characters from both ends moving towards the center,
confirming if the string qualifies as a palindrome.

Examples:
Input: string = "madam"
Output: True
Explanation: "madam" reads the same forwards and backwards, so it is a palindrome.

Input: string = "hello"
Output: False
Explanation: "hello" does not read the same forwards and backwards.

Input: string = "a"
Output: True
Explanation: A single character string is always a palindrome.
*/

#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(const string &);

int main()
{
    cout << (is_palindrome("madam") ? "True" : "False") << endl;
    cout << (is_palindrome("hello") ? "True" : "False") << endl;
    cout << (is_palindrome("a") ? "True" : "False") << endl;
    cout << (is_palindrome("racecar") ? "True" : "False") << endl;
    cout << (is_palindrome("world") ? "True" : "False") << endl;
    return 0;
}

bool is_palindrome(const string &s)
{
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return s == reversed;
}