/*
Calculating Fibonacci Numbers to Uncover the Sequence
Easy

Problem Statement:
The factorial of a number can be very large, but what if you want to know the sum of all its digits?
Like breaking down a giant treasure chest into smaller gems, you must calculate the sum of the digits of the factorial.

Examples:
Input: number = 4
Output: 6
Explanation: Factorial of 4 is 24, and the sum of its digits 2 + 4 = 6.

Input: number = 3
Output: 6
Explanation: Factorial of 3 is 6, so sum of digits is 6.

Input: number = 5
Output: 3
Explanation: Factorial of 5 is 120, and sum of digits is 1 + 2 + 0 = 3.
*/

#include <bits/stdc++.h>
using namespace std;

int sum_digits_factorial(int);

int main()
{
    cout << sum_digits_factorial(4) << endl;
    cout << sum_digits_factorial(3) << endl;
    cout << sum_digits_factorial(5) << endl;
    cout << sum_digits_factorial(7) << endl;
    cout << sum_digits_factorial(0) << endl;
    return 0;
}

int sum_digits_factorial(int n)
{
    long long fact = 1;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    while (fact != 0)
    {
        int digit = fact % 10;
        sum += digit;
        fact /= 10;
    }

    return sum;
}