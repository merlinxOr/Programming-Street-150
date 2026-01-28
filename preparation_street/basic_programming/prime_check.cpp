/*
Solving the Prime Mystery in a Programming Contest
Easy

Problem Statement:
In a programming contest, you get a question: determine whether a given number is prime.
You remember a prime number is a number greater than 1 that has no divisors other than 1 and itself.
To solve this, you decide to check divisibility from 2 up to the square root of the number.
This way, you can quickly find if any divisor exists and decide primality.

Examples:
Input: number = 7
Output: Prime
Explanation: 7 has no divisors other than 1 and 7, so it is Prime.

Input: number = 4
Output: Not Prime
Explanation: 4 is divisible by 2, so it is Not Prime.

Input: number = 2
Output: Prime
Explanation: 2 is the smallest prime number.
*/

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int);

int main()
{
    cout << (is_prime(7) ? "Prime" : "Not Prime") << endl;
    cout << (is_prime(4) ? "Prime" : "Not Prime") << endl;
    cout << (is_prime(2) ? "Prime" : "Not Prime") << endl;
    cout << (is_prime(1) ? "Prime" : "Not Prime") << endl;
    cout << (is_prime(29) ? "Prime" : "Not Prime") << endl;
    return 0;
}

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}