/*
Finding the Maximum Value to Discover the Peak
Easy

Problem Statement:
You’re given two ancient artifacts, each cursed to repeat at their own intervals.
To break the cycle and align them perfectly, you must determine the earliest time both will align.
In other words, find the Least Common Multiple (LCM) of two numbers.

Examples:
Input: a = 12, b = 15
Output: 60
Explanation: The LCM of 12 and 15 is 60.

Input: a = 7, b = 5
Output: 35
Explanation: The LCM of 7 and 5 is 35.

Input: a = 10, b = 20
Output: 20
Explanation: The LCM of 10 and 20 is 20.
*/

#include <bits/stdc++.h>
using namespace std;

int lcm(int, int);
int gcd(int, int);

int main()
{
    cout << lcm(12, 15) << endl;
    cout << lcm(7, 5) << endl;
    cout << lcm(10, 20) << endl;
    cout << lcm(8, 9) << endl;
    cout << lcm(25, 15) << endl;
    return 0;
}

int lcm(int a, int b)
{
    return ((a * b) / gcd(a, b));
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