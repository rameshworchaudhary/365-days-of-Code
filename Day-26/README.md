# Day 26 — Find the Second Smallest Element

## Problem

Given an integer array, find the smallest and second smallest distinct elements in the array.

## Example

Input:
[10, 200, 30, 40, 50]

Output:
Smallest element in the array is: 10
Second smallest element in the array is: 30

## Approach

First, I initialized the first element as the smallest element and `INT_MAX` as the second smallest element.

Then, I traversed the array and compared each element with the smallest value.

If a smaller element was found, I updated both `smallest` and `secondSmallest`.

Otherwise, I checked whether the current element could be the second smallest distinct element.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Language

C++

## What I Learned

* How to find the smallest element in an array
* How to find the second smallest distinct element
* How to use `INT_MAX` for initialization
* How to update two variables during a single traversal
* Time and space comp
