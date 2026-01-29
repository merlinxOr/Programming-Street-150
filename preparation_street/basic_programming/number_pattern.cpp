/*
Converting Decimal to Binary, the Language of Computers
Easy

Problem Statement:
Patterns tell stories in numbers.
Your task is to generate a simple sequence of numbers arranged in rows,
like filling up seats in a theater one by one, starting from 1 and going upwards.

Examples:
Input: rows = 3
Output: 1 2 3 4 5 6
Explanation: A pattern with 3 rows produces numbers from 1 to 6 arranged sequentially.

Input: rows = 1
Output: 1 2
Explanation: With 1 row, the sequence is 1 followed by 2.

Input: rows = 2
Output: 1 2 3 4
Explanation: For 2 rows, the sequence is numbers 1 through 4.
*/

#include <bits/stdc++.h>
using namespace std;

void number_pattern(int);

int main()
{
    number_pattern(3);
    number_pattern(1);
    number_pattern(2);
    number_pattern(4);
    number_pattern(0);
    return 0;
}

void number_pattern(int rows)
{
    int n = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << n++ << " ";
        }
    }
    cout << endl;
}