/*
Counting Words to Measure the Length of a Story
Easy

Problem Statement:
A student begins their journey into the realm of numbers.
Their first task is to learn and master the multiplication table for any given number.
Can you help them generate it?

Topics:
Basic Programming
Mathematical Computations

Examples:
Input: number = 4
Output: 4 x 1 = 4, 4 x 2 = 8, 4 x 3 = 12, 4 x 4 = 16, 4 x 5 = 20
Explanation: The multiplication table for 4 up to 5 is generated.

Input: number = 1
Output: 1 x 1 = 1, 1 x 2 = 2, 1 x 3 = 3, 1 x 4 = 4, 1 x 5 = 5
Explanation: Multiplication table for 1 is straightforward.

Input: number = 7
Output: 7 x 1 = 7, 7 x 2 = 14, 7 x 3 = 21, 7 x 4 = 28, 7 x 5 = 35
Explanation: Multiplication table for 7 up to 5 is generated.
*/

#include <bits/stdc++.h>
using namespace std;

void multiplication_table(int);

int main()
{
    multiplication_table(4);
    multiplication_table(1);
    multiplication_table(7);
    multiplication_table(10);
    multiplication_table(0);
    return 0;
}

void multiplication_table(int n)
{
    for (int i = 1; i <= 5; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    cout << endl;
}