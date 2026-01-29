/*
Summing Elements of an Array to Reveal Their Total
Easy

Problem Statement:
Numbers can be long or short, but what if you need to find out exactly how many digits make up a number? Like counting the soldiers in an army, your task is to count how many digits a number contains.

Examples:
Input: number = 12345
Output: 5
Explanation: The number 12345 has 5 digits.

Input: number = 7
Output: 1
Explanation: The number 7 has 1 digit.

Input: number = 1000
Output: 4
Explanation: The number 1000 has 4 digits.
*/

#include <bits/stdc++.h>
using namespace std;

int count_digits(int);

int main()
{
    cout << count_digits(12345) << endl;
    cout << count_digits(7) << endl;
    cout << count_digits(1000) << endl;
    cout << count_digits(-987) << endl;
    cout << count_digits(0) << endl;
    return 0;
}

int count_digits(int n)
{
    int count = 0;

    while (n != 0)
    {
        n /= 10;
        count++;
    }

    return count;
}