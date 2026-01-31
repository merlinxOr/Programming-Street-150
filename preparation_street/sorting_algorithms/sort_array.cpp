/*
Printing Patterns to Draw with Numbers
Easy

Problem Statement:
A chaotic set of scrolls needs to be organized in increasing order of their magic levels. Help the wizard sort this array of numbers in ascending order.

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

void sort_array(int[], int);

int main()
{
    int arr1[] = {3, 1, 4, 1, 5, 9};
    int arr2[] = {10, 2, 8, 6};
    int arr3[] = {1};
    int arr4[] = {};
    int arr5[] = {5, -3, 0, 12, 7};

    sort_array(arr1, 6);
    sort_array(arr2, 4);
    sort_array(arr3, 1);
    sort_array(arr4, 0);
    sort_array(arr5, 5);

    for (int i = 0; i < 6; i++)
        cout << arr1[i] << " ";
    cout << endl;
    for (int i = 0; i < 4; i++)
        cout << arr2[i] << " ";
    cout << endl;
    for (int i = 0; i < 1; i++)
        cout << arr3[i] << " ";
    cout << endl;
    cout << endl; // arr4 vacío
    for (int i = 0; i < 5; i++)
        cout << arr5[i] << " ";
    cout << endl;

    return 0;
}

void sort_array(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}