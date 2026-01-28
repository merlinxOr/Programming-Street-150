/*
Calculating Power Using Recursion Like a Wizard
Easy

Problem Statement:
You stumble upon a list of magical stones, each with a power level. Your task is to find the most powerful and the weakest stone in the collection.

Examples:
Input: array = [4, 7, 1, 8, 5]
Output: Largest: 8, Smallest: 1
Explanation: The largest number in the array is 8 and the smallest is 1.

Input: array = [10, 10, 10]
Output: Largest: 10, Smallest: 10
Explanation: All numbers are the same, so largest and smallest both are 10.

Input: array = [-5, -2, -9, 0]
Output: Largest: 0, Smallest: -9
Explanation: Largest number is 0 and smallest number is -9.
*/

#include <bits/stdc++.h>
using namespace std;

void find_min_max(vector<int>);

int main()
{
    find_min_max({4, 7, 1, 8, 5});
    find_min_max({10, 10, 10});
    find_min_max({-5, -2, -9, 0});
    find_min_max({3});
    find_min_max({25, -3, 17, 0, 42});
    return 0;
}

void find_min_max(vector<int> arr)
{
    cout << "Smallest: " << *min_element(arr.begin(), arr.end()) << ", Largest: " << *max_element(arr.begin(), arr.end()) << endl;
}