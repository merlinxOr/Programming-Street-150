/*
Finding the Minimum Value Hidden in the Array
Easy

Problem Statement:
You’ve found a ledger of gold coins collected over time. Calculate the total treasure by summing all the entries in this array.

Examples:
Input: array = [1, 2, 3, 4, 5]
Output: 15
Explanation: The sum of the elements in the array is 15.

Input: array = [10, 20, 30]
Output: 60
Explanation: Sum is 10 + 20 + 30 = 60.

Input: array = []
Output: 0
Explanation: Empty array sum is 0.
*/

#include <bits/stdc++.h>
using namespace std;

int sum_array(const vector<int> &);

int main()
{
    cout << sum_array({1, 2, 3, 4, 5}) << endl;
    cout << sum_array({10, 20, 30}) << endl;
    cout << sum_array({}) << endl;
    cout << sum_array({-5, 10, -3, 8}) << endl;
    cout << sum_array({7}) << endl;
    return 0;
}

int sum_array(const vector<int> &arr)
{

    // return accumulate(arr.begin(), arr.end(), 0);

    int sum = 0;
    for (auto i : arr)
    {
        sum += i;
    }

    return sum;
}