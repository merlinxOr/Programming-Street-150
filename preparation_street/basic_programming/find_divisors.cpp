/*
Finding All Divisors of a Number
Easy

Problem Statement:
Given a positive integer, your goal is to find all the numbers that divide it evenly without leaving a remainder. This will help you practice iteration and modular arithmetic efficiently.

Examples:
Input: number = 6
Output: 1, 2, 3, 6
Explanation: The divisors of 6 are 1, 2, 3, and 6.

Input: number = 12
Output: 1, 2, 3, 4, 6, 12
Explanation: All divisors of 12 are identified correctly.

Input: number = 15
Output: 1, 3, 5, 15
Explanation: Divisors of 15 include 1, 3, 5, and 15.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> find_divisors(int);

int main()
{
    vector<int> result1 = find_divisors(6);
    vector<int> result2 = find_divisors(12);
    vector<int> result3 = find_divisors(15);
    vector<int> result4 = find_divisors(1);
    vector<int> result5 = find_divisors(25);

    for (int num : result1)
        cout << num << " ";
    cout << endl;
    for (int num : result2)
        cout << num << " ";
    cout << endl;
    for (int num : result3)
        cout << num << " ";
    cout << endl;
    for (int num : result4)
        cout << num << " ";
    cout << endl;
    for (int num : result5)
        cout << num << " ";
    cout << endl;

    return 0;
}

vector<int> find_divisors(int n)
{
    vector<int> result;

    if (n == 0)
    {
        return result;
    }

    n = abs(n);

    int temp = n;

    while (temp != 0)
    {
        if (n % temp == 0)
        {
            result.push_back(temp);
        }

        temp--;
    }

    return result;
}