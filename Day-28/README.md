# Day 28 — Find the First Missing Positive

## Problem

Given an integer array, find the smallest positive integer that is missing from the array.

## Example

Input:
[1, 3, 4, 5, -1, -2]

Output:
First missing positive: 2

## Approach

I started checking from the positive integer `1`.

For each number, I checked whether it exists in the array.

If the number was found, I moved to the next positive integer.

I continued this process until I found the first positive integer that was not present in the array.

I implemented the same logic in both Python and C++.

## Complexity

* Time Complexity: O(n²) in the worst case
* Space Complexity: O(1)

## Language

* Python
* C++

## What I Learned

* How to find the first missing positive integer
* How to check whether an element exists in an array
* How to use loops to search for consecutive positive numbers
* How to use a boolean flag in C++
* How to implement the same logic in Python and C++
* Time and space complexity
