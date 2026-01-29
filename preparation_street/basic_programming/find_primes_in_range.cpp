/*
Converting Temperatures to Bridge Two Worlds
Easy

Problem Statement:
A village elder seeks your help to find sacred prime numbers—those that can only be divided by 1 and themselves—within a specified range.
Your task is to find them all.

Examples:
Input: range = [10, 30]
Output: [11, 13, 17, 19, 23, 29]
Explanation: Prime numbers between 10 and 30 are 11, 13, 17, 19, 23, and 29.

Input: range = [2, 5]
Output: [2, 3, 5]
Explanation: Prime numbers between 2 and 5 are 2, 3, and 5.

Input: range = [14, 16]
Output: []
Explanation: There are no prime numbers between 14 and 16.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> find_primes(int, int);
bool is_prime(int);

int main()
{
    vector<int> result1 = find_primes(10, 30);
    vector<int> result2 = find_primes(2, 5);
    vector<int> result3 = find_primes(14, 16);
    vector<int> result4 = find_primes(1, 50);
    vector<int> result5 = find_primes(100, 110);

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

vector<int> find_primes(int start, int end)
{
    vector<int> result;

    int current = start;

    while (current <= end)
    {
        if (is_prime(current))
        {
            result.push_back(current);
        }
        current++;
    }

    return result;
}

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    if (n % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}