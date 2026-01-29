/*
Checking Anagrams to Spot Word Twins
Easy

Problem Statement:
Prime numbers are the building blocks of all numbers, indivisible except by 1 and themselves.
Your mission is to identify and list all such prime numbers that are smaller than a given number.
Can you help reveal this secret list of prime guardians?

Examples:
Input: number = 20
Output: 2, 3, 5, 7, 11, 13, 17, 19
Explanation: All prime numbers less than 20 include 2, 3, 5, 7, 11, 13, 17, and 19.

Input: number = 10
Output: 2, 3, 5, 7
Explanation: Prime numbers less than 10 are 2, 3, 5, and 7.

Input: number = 2
Output:
Explanation: There are no prime numbers less than 2.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> primes_less_than(int);
bool is_prime(int);

int main()
{
    vector<int> result1 = primes_less_than(20);
    vector<int> result2 = primes_less_than(10);
    vector<int> result3 = primes_less_than(2);
    vector<int> result4 = primes_less_than(50);
    vector<int> result5 = primes_less_than(1);

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

vector<int> primes_less_than(int n)
{
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        if (is_prime(i))
        {
            result.push_back(i);
        }
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