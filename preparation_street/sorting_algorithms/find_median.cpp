/*
Finding the Median to Discover the Middle Ground
Medium

Problem Statement:
In the realm of numbers, you are given an array filled with scattered values. Your task is to bring order by finding the median — the number sitting right in the middle once the array is sorted. Will you find the balance point that divides the array perfectly?

Examples:
Input: array = [3, 1, 2, 4, 5]
Output: 3
Explanation: The median of the sorted array [1, 2, 3, 4, 5] is 3.

Input: array = [7, 5, 3, 1]
Output: 4
Explanation: Sorted array is [1, 3, 5, 7]. Median is average of middle two: (3+5)/2 = 4.

Input: array = [10]
Output: 10
Explanation: With only one element, the median is the element itself.
*/

#include <bits/stdc++.h>
using namespace std;

double find_median(int[], int);

int main()
{
    int arr1[] = {3, 1, 2, 4, 5};
    int arr2[] = {7, 5, 3, 1};
    int arr3[] = {10};
    int arr4[] = {4, 2, 6, 8, 1, 3};
    int arr5[] = {9, 5, 1, 7};

    cout << find_median(arr1, 5) << endl;
    cout << find_median(arr2, 4) << endl;
    cout << find_median(arr3, 1) << endl;
    cout << find_median(arr4, 6) << endl;
    cout << find_median(arr5, 4) << endl;

    return 0;
}

double find_median(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }

    return (n % 2 == 0) ? ((arr[n / 2] + arr[(n - 1) / 2]) / 2) : arr[n / 2];
}