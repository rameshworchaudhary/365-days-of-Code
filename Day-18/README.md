# Day 18 — Find the Duplicate Element

## Problem

Given an array of integers, find the duplicate elements present in the array.

## Example

Input:
[1, 2, 3, 4, 5, 3, 5]

Output:
Duplicate element found: 3
Duplicate element found: 5

## Approach

Used a brute-force approach with nested loops.

For every element, I compare it with the elements after it to find duplicate elements.

If a duplicate is found, I print it and use `break` to stop the inner loop.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(1)

## Language

C++

## What I Learned

- Finding duplicate elements in an array
- Using nested loops
- Comparing array elements
- Using `break` to stop the inner loop
- Brute-force problem solving
- Time and space complexity