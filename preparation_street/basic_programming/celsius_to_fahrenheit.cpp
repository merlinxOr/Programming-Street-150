/*
Sorting Arrays to Organize the Chaos
Easy

Problem Statement:
On a cold winter day, you want to convert temperatures from Celsius to Fahrenheit to understand the weather better.
Using the formula F = (C × 9/5) + 32, you decide to implement a program that performs this conversion for any given Celsius temperature.

Examples:
Input: C = 0
Output: 32
Explanation: 0°C converts to 32°F.

Input: C = 100
Output: 212
Explanation: 100°C converts to 212°F.

Input: C = -40
Output: -40
Explanation: -40°C converts to -40°F.
*/

#include <bits/stdc++.h>
using namespace std;

double celsius_to_fahrenheit(double);

int main()
{
    cout << celsius_to_fahrenheit(0) << endl;
    cout << celsius_to_fahrenheit(100) << endl;
    cout << celsius_to_fahrenheit(-40) << endl;
    cout << celsius_to_fahrenheit(37) << endl;
    cout << celsius_to_fahrenheit(-10) << endl;
    return 0;
}

double celsius_to_fahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}