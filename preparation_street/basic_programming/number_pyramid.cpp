/*
Generating a Number Pyramid
Medium

Problem Statement:
Print a pyramid where each row contains numbers starting from 1 up to the row number. For example, row 3 should print '123'. This pattern tests nested loops and string formatting.

Examples:
Input: rows = 2
Output: 1 12
Explanation: Row 1 prints '1', Row 2 prints '12'.

Input: rows = 4
Output: 1 12 123 1234
Explanation: Rows generate sequences from 1 to the row number.

Input: rows = 3
Output: 1 12 123
Explanation: Three rows print progressively longer sequences.
*/

#include <bits/stdc++.h>
using namespace std;

void number_pyramid(int);

int main()
{
    number_pyramid(2);
    number_pyramid(4);
    number_pyramid(3);
    number_pyramid(1);
    number_pyramid(5);
    return 0;
}

void number_pyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << " ";
    }
    cout << endl;
}