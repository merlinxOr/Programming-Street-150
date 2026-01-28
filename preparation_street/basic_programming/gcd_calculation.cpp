/*
Summing the Digits to Find the Digital Root
Easy

Problem Statement:
You and your friend are trying to divide candies equally.
To do that, you need to find the greatest common divisor (GCD) of two numbers.
The Euclidean algorithm provides a fast way to calculate GCD by repeatedly subtracting or using the remainder operation.
You decide to implement this to help with fair distribution.

Examples:
Input: a = 54, b = 24
Output: 6
Explanation: GCD of 54 and 24 is 6.

Input: a = 10, b = 15
Output: 5
Explanation: GCD of 10 and 15 is 5.

Input: a = 7, b = 13
Output: 1
Explanation: 7 and 13 are co-prime, so GCD is 1.
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int, int);

int main()
{
    cout << gcd(54, 24) << endl;
    cout << gcd(10, 15) << endl;
    cout << gcd(7, 13) << endl;
    cout << gcd(48, 18) << endl;
    cout << gcd(100, 75) << endl;
    return 0;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}