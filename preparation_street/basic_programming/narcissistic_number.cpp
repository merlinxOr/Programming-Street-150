/*
Removing Duplicates to Clean the Data
Easy

Problem Statement:
Some numbers are special—they are equal to the sum of their own digits each raised to the power of the number of digits.
These are called narcissistic numbers. Your mission is to determine if a given number is one such narcissistic number.

Examples:
Input: number = 153
Output: Narcissistic Number
Explanation: 153 is a narcissistic number because 1^3 + 5^3 + 3^3 = 153.

Input: number = 9474
Output: Narcissistic Number
Explanation: 9474 is a narcissistic number because 9^4 + 4^4 + 7^4 + 4^4 = 9474.

Input: number = 123
Output: Not a Narcissistic Number
Explanation: 123 is not a narcissistic number because 1^3 + 2^3 + 3^3 = 36, which is not equal to 123.
*/

#include <bits/stdc++.h>
using namespace std;

bool check_narcissistic(int);

int main()
{
    cout << (check_narcissistic(153) ? "Narcissistic number" : "Not narcissistic number") << endl;
    cout << (check_narcissistic(9474) ? "Narcissistic number" : "Not narcissistic number") << endl;
    cout << (check_narcissistic(123) ? "Narcissistic number" : "Not narcissistic number") << endl;
    cout << (check_narcissistic(370) ? "Narcissistic number" : "Not narcissistic number") << endl;
    cout << (check_narcissistic(1634) ? "Narcissistic number" : "Not narcissistic number") << endl;
    return 0;
}

bool check_narcissistic(int n)
{
    int len = 0;
    int total = 0;

    int temp = n;
    while (temp != 0)
    {
        temp /= 10;
        len++;
    }

    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        total += pow(digit, len);
        temp /= 10;
    }

    return total == n;
}