/*
Printing Patterns to Draw with Numbers
Easy

Problem Statement:
A chaotic set of scrolls needs to be organized in increasing order of their magic levels.
Help the wizard sort this array of numbers in ascending order.

Examples:
Input: array = [3, 1, 4, 1, 5, 9]
Output: [1, 1, 3, 4, 5, 9]
Explanation: The array sorted in ascending order is [1, 1, 3, 4, 5, 9].

Input: array = [10, 2, 8, 6]
Output: [2, 6, 8, 10]
Explanation: Sorted array is [2, 6, 8, 10].

Input: array = [1]
Output: [1]
Explanation: Single element array remains [1].
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sort_array(vector<int>);

int main()
{
    vector<int> result1 = sort_array({3, 1, 4, 1, 5, 9});
    vector<int> result2 = sort_array({10, 2, 8, 6});
    vector<int> result3 = sort_array({1});
    vector<int> result4 = sort_array({});
    vector<int> result5 = sort_array({5, -3, 0, 12, 7});

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

vector<int> sort_array(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    return arr;
}