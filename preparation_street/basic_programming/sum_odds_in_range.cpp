/*
Finding the Factorial with Recursive Elegance
Easy

Problem Statement:
Imagine you are on a quest to find the treasure hidden among numbers.
This treasure is the sum of all odd numbers that lie between two points on the number line. Given a range,
your task is to gather all these odd numbers and calculate their total sum. Can you write a program that helps you uncover this hidden treasure?

Examples:
Input: range = [1, 10]
Output: 25
Explanation: Adding all the odd numbers between 1 and 10 gives us 1 + 3 + 5 + 7 + 9 = 25, which is our sought treasure.

Input: range = [2, 5]
Output: 8
Explanation: Odd numbers between 2 and 5 are 3 and 5, and their sum is 8.

Input: range = [10, 10]
Output: 0
Explanation: There are no odd numbers between 10 and 10, so the sum is 0.
*/

#include <bits/stdc++.h>
using namespace std;

int sum_odds_in_range(int, int);

int main()
{
    cout << sum_odds_in_range(1, 10) << endl;
    cout << sum_odds_in_range(2, 5) << endl;
    cout << sum_odds_in_range(10, 10) << endl;
    cout << sum_odds_in_range(1, 100) << endl;
    cout << sum_odds_in_range(-5, 5) << endl;
    return 0;
}

int sum_odds_in_range(int start, int end)
{
    int result = 0;

    int current = start;

    while (current <= end)
    {
        if (current % 2 != 0)
        {
            result += current;
        }

        current++;
    }

    return result;
}