# Day 20 — Find the Largest Difference

## Problem

Given an integer array, find the largest difference between any two elements in the array.

## Example

Input:
[1, 2, 3, 4, 5, 6]

Output:
Largest difference is: 5

## Approach

Used a single `for` loop to find the smallest and largest elements in the array.

I initialized both `smallest` and `largest` with the first element of the array.

Then, I compared each element with `smallest` and `largest` and updated them when necessary.

Finally, I calculated the largest difference by subtracting the smallest element from the largest element.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Language

C++

## What I Learned

- How to find the smallest and largest elements in an array
- How to calculate the difference between two values
- Using a single loop to process an array
- Time and space complexity