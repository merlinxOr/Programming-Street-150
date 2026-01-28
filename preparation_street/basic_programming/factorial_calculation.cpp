/*
Automating Factorial Calculation for Combinatorics
Easy

Problem Statement:
While solving combinatorics problems, you need to calculate factorials of numbers.
Factorial of a number N is the product of all positive integers less than or equal to N.
To automate this, you decide to write a program that calculates factorials either iteratively or recursively.

Examples:
Input: N = 5
Output: 120
Explanation: 5! = 5 × 4 × 3 × 2 × 1 = 120.

Input: N = 0
Output: 1
Explanation: By definition, 0! = 1.

Input: N = 3
Output: 6
Explanation: 3! = 3 × 2 × 1 = 6.
*/

#include <bits/stdc++.h>
using namespace std;

long long factorial(int);

int main()
{
    cout << factorial(5) << endl;
    cout << factorial(0) << endl;
    cout << factorial(3) << endl;
    cout << factorial(7) << endl;
    cout << factorial(10) << endl;
    return 0;
}

long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}