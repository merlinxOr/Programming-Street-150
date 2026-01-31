/*
Finding the Second Largest Number in an Array
Medium

Problem Statement:
Given an array, find the second largest number. Sorting the array or scanning twice can solve this.
This is a classic problem testing array manipulation and sorting techniques.

Examples:
Input: array = [10, 20, 4, 45, 99]
Output: 45
Explanation: 99 is largest, second largest is 45.

Input: array = [1, 2, 3]
Output: 2
Explanation: Largest is 3, second largest is 2.

Input: array = [5, 5, 4]
Output: 4
Explanation: Even with duplicates, 4 is the second largest.
*/

#include <bits/stdc++.h>
using namespace std;

int second_largest(int[], int);

int main()
{
    int arr1[] = {10, 20, 4, 45, 99};
    int arr2[] = {1, 2, 3};
    int arr3[] = {5, 5, 4};
    int arr4[] = {7, 7, 7, 7};
    int arr5[] = {12, 35, 1, 10, 34, 1};

    cout << second_largest(arr1, 5) << endl;
    cout << second_largest(arr2, 3) << endl;
    cout << second_largest(arr3, 3) << endl;
    cout << second_largest(arr4, 4) << endl;
    cout << second_largest(arr5, 6) << endl;

    return 0;
}

int second_largest(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    return arr[n - 2];
}