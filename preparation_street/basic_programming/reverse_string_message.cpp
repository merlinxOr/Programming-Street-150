/*
Checking Palindromes Like a Word Detective
Easy

Problem Statement:
A secret message has been encoded by reversing its characters. To reveal its true meaning, you must reverse the string back to its original form.

Examples:
Input: string = programming
Output: gnimmargorp
Explanation: The reversed string of programming is gnimmargorp.

Input: string = level
Output: level
Explanation: The reversed string of level is level (a palindrome).

Input: string = openai
Output: ianepo
Explanation: The reversed string of openai is ianepo.
*/

#include <bits/stdc++.h>
using namespace std;

string reverse_string(string);

int main()
{
    cout << reverse_string("programming") << endl;
    cout << reverse_string("level") << endl;
    cout << reverse_string("openai") << endl;
    cout << reverse_string("algorithm") << endl;
    cout << reverse_string("code") << endl;
    return 0;
}

string reverse_string(string s)
{
    reverse(s.begin(), s.end());
    return s;
}