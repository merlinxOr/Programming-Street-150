/*
Sorting with Bubble Sort to Tame the Wild Array
Easy

Problem Statement:
In the world of sequences, the Fibonacci series is legendary, starting with 0 and 1, each number being the sum of the two before it.
Your challenge is to find the Fibonacci number sitting at a specific position in this endless chain.
Can you pinpoint the exact number that belongs there?

Examples:
Input: position = 5
Output: 5
Explanation: At position 5 in the Fibonacci sequence (0, 1, 1, 2, 3, 5), the number is 5.

Input: position = 1
Output: 0
Explanation: The first Fibonacci number is 0.

Input: position = 7
Output: 13
Explanation: The Fibonacci number at position 7 is 13.
*/

#include <bits/stdc++.h>
using namespace std;

int fibonacci_at_position(int);

int main()
{
    cout << fibonacci_at_position(5) << endl;
    cout << fibonacci_at_position(1) << endl;
    cout << fibonacci_at_position(7) << endl;
    cout << fibonacci_at_position(10) << endl;
    cout << fibonacci_at_position(0) << endl;
    return 0;
}

int fibonacci_at_position(int n)
{
    if (n <= 1)
        return n;

    int a = 0;
    int b = 1;

    for (int i = 2; i <= n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    }

    return b;
}