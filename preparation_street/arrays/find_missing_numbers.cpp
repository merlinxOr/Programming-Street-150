/*
Reversing Numbers Digit by Digit
Easy

Problem Statement:
Sequences are expected to be complete, but sometimes numbers go missing along the way. Your task is to find all the missing numbers in a sequence that should run from 1 to n, like a detective filling in the gaps.

Examples:
Input: sequence = [1, 2, 4, 5]
Output: [3]
Explanation: In the sequence from 1 to 5, the number 3 is missing.

Input: sequence = [2, 3, 7, 6, 8, 1]
Output: [4, 5]
Explanation: Numbers 4 and 5 are missing from the sequence 1 to 8.

Input: sequence = [1, 2, 3]
Output: []
Explanation: No numbers are missing in this sequence.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> find_missing_numbers(vector<int>);

int main()
{
    vector<int> result1 = find_missing_numbers({1, 2, 4, 5});
    vector<int> result2 = find_missing_numbers({2, 3, 7, 6, 8, 1});
    vector<int> result3 = find_missing_numbers({1, 2, 3});
    vector<int> result4 = find_missing_numbers({});
    vector<int> result5 = find_missing_numbers({1, 3, 5, 7, 9});

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

vector<int> find_missing_numbers(vector<int> sequence)
{

    vector<int> result;

    if (sequence.empty())
    {
        return result;
    }

    sort(sequence.begin(), sequence.end());
    unordered_set<int> present(sequence.begin(), sequence.end());

    for (int i = 1; i <= sequence.back(); i++)
    {
        if (!present.count(i))
        {
            result.push_back(i);
        }
    }

    return result;
}