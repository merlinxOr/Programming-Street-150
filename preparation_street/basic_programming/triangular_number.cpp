/*
Calculating LCM to Find the Common Rhythm
Easy

Problem Statement:
Imagine stacking objects to form a triangle. The N-th triangular number tells you how many objects you have stacked after N layers. Calculate this number and see the shape grow.

Examples:
Input: N = 4
Output: 10
Explanation: Sum of first 4 natural numbers: 1+2+3+4 = 10.

Input: N = 1
Output: 1
Explanation: With 1 layer, the triangular number is 1.

Input: N = 6
Output: 21
Explanation: Sum of first 6 natural numbers: 21.
*/

#include <bits/stdc++.h>
using namespace std;

int triangular_number(int);

int main()
{
    cout << triangular_number(4) << endl;
    cout << triangular_number(1) << endl;
    cout << triangular_number(6) << endl;
    cout << triangular_number(10) << endl;
    cout << triangular_number(0) << endl;
    return 0;
}

int triangular_number(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum += n;
        n--;
    }

    return sum;
}