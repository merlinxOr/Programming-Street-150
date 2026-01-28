/*
Counting Character Frequencies to Reveal Patterns
Easy

Problem Statement:
While exploring patterns in nature, you get curious about the Fibonacci sequence —
a series where each number is the sum of the two preceding ones.
To help generate the sequence quickly, you decide to write a program that calculates the Nth Fibonacci number.

Examples:
Input: N = 6
Output: 8
Explanation: Fibonacci sequence up to 6 terms: 0, 1, 1, 2, 3, 5, 8.

Input: N = 1
Output: 0
Explanation: The first Fibonacci number is 0.

Input: N = 2
Output: 1
Explanation: The second Fibonacci number is 1.
*/

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int);

int main()
{
    cout << fibonacci(6) << endl;
    cout << fibonacci(1) << endl;
    cout << fibonacci(2) << endl;
    cout << fibonacci(10) << endl;
    cout << fibonacci(0) << endl;
    return 0;
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}