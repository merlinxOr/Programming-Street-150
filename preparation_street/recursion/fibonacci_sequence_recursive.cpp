/*
Generating the Fibonacci Sequence Using Recursion
Medium

Problem Statement:
You are tasked with writing a recursive function that prints the Fibonacci sequence up to a given number n. The sequence starts with 0 and 1, and each subsequent number is the sum of the previous two. Use recursion to elegantly generate this sequence until it reaches the desired length.

Examples:
Input: number = 3
Output: 0, 1, 1
Explanation: The first 3 numbers of the Fibonacci sequence are 0, 1, and 1.

Input: number = 5
Output: 0, 1, 1, 2, 3
Explanation: The Fibonacci sequence up to 5 numbers is generated recursively.

Input: number = 7
Output: 0, 1, 1, 2, 3, 5, 8
Explanation: Generating the first 7 Fibonacci numbers with recursion.
*/

#include <bits/stdc++.h>
using namespace std;

void fibonacci_sequence(int);
int fibonacci(int);

int main()
{
    fibonacci_sequence(3);
    fibonacci_sequence(5);
    fibonacci_sequence(7);
    fibonacci_sequence(1);
    fibonacci_sequence(10);
    return 0;
}

void fibonacci_sequence(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}