/*
Checking Perfect Numbers in the World of Math
Easy

Problem Statement:
You stand before the classic challenge of exponents. Given a base and an exponent, compute the power — that is, multiply the base by itself exponent times. Can you harness this power efficiently?

Examples:
Input: base = 2, exponent = 3
Output: 8
Explanation: 2 raised to the power of 3 is 8.

Input: base = 5, exponent = 0
Output: 1
Explanation: Any number raised to zero is 1.

Input: base = 3, exponent = 4
Output: 81
Explanation: 3 raised to 4 is 3*3*3*3 = 81.
*/

#include <bits/stdc++.h>
using namespace std;

long long calculate_power(int, int);

int main()
{
    cout << calculate_power(2, 3) << endl;
    cout << calculate_power(5, 0) << endl;
    cout << calculate_power(3, 4) << endl;
    cout << calculate_power(10, 2) << endl;
    cout << calculate_power(7, 3) << endl;
    return 0;
}

long long calculate_power(int base, int exponent)
{
    return pow(base, exponent);
}