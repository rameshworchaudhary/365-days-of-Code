# Day 23 — Find the Majority Element

## Problem

Given an integer array, find the element that appears more than `n/2` times in the array.

## Example

Input:
[1, 2, 2, 2, 3, 2, 3]

Output:
Majority element: 2

## Approach

Used a brute-force approach with nested loops.

For every element, I counted how many times it appears in the array.

If the count is greater than `n/2`, I identified it as the majority element and stopped the loop.

If no element satisfies the condition, I printed that there is no majority element.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(1)

## Language

C++

## What I Learned

- How to find the majority element in an array
- How to count the frequency of an element
- Using nested loops for frequency counting
- Using a condition based on `n/2`
- Time and space complexity