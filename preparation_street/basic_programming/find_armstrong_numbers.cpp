/*
Searching for an Element in the Unseen Depths
Easy

Problem Statement:
Legend says that certain numbers hold a self-loving property—equal to the sum of the cubes of their digits.
Find all such 'Armstrong numbers' within a given range.

Examples:
Input: range = [1, 500]
Output: [1, 153, 370, 371, 407]
Explanation: Armstrong numbers between 1 and 500 are 1, 153, 370, 371, and 407.

Input: range = [100, 160]
Output: [153]
Explanation: 153 is the only Armstrong number between 100 and 160.

Input: range = [400, 500]
Output: [407]
Explanation: 407 is the only Armstrong number between 400 and 500.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> find_armstrong(int, int);

int main()
{
    vector<int> result1 = find_armstrong(1, 500);
    vector<int> result2 = find_armstrong(100, 160);
    vector<int> result3 = find_armstrong(400, 500);
    vector<int> result4 = find_armstrong(1, 1000);
    vector<int> result5 = find_armstrong(1, 10);

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

vector<int> find_armstrong(int start, int end)
{
    vector<int> result;

    while (start <= end)
    {
        int temp = start;
        int len = (int)log10(temp) + 1;
        int total = 0;

        while (temp != 0)
        {
            int digit = temp % 10;
            total += pow(digit, len);
            temp /= 10;
        }

        if (total == start)
        {
            result.push_back(start);
        }

        start++;
    }

    return result;
}