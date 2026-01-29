/*
Removing Spaces to Tighten the Text
Easy

Problem Statement:
Break the number into digits, square each digit, and then sum them all up. How large does this sum grow?

Examples:
Input: number = 123
Output: 14
Explanation: 1^2 + 2^2 + 3^2 = 14.

Input: number = 0
Output: 0
Explanation: Square of 0 is 0.

Input: number = 99
Output: 162
Explanation: 9^2 + 9^2 = 81 + 81 = 162.
*/

#include <bits/stdc++.h>
using namespace std;

int sum_of_squared_digits(int);

int main()
{
    cout << sum_of_squared_digits(123) << endl;
    cout << sum_of_squared_digits(0) << endl;
    cout << sum_of_squared_digits(99) << endl;
    cout << sum_of_squared_digits(7) << endl;
    cout << sum_of_squared_digits(456) << endl;
    return 0;
}

int sum_of_squared_digits(int n)
{
    n = abs(n);

    int temp = n, sum = 0;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, 2);
        temp /= 10;
    }

    return sum;
}