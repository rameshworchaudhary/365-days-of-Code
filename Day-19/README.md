# Day 19 — Remove Duplicate Elements

## Problem

Given an integer array, remove all duplicate elements and print only the unique elements.

## Example

Input:
[1, 2, 3, 4, 5, 1, 2]

Output:
1 2 3 4 5

## Approach

Used a brute-force approach with nested loops.

For every element, I compare it with the elements that appeared before it.

If the element is already present, I mark it as a duplicate. Otherwise, I store it at the next unique position in the same array.

Finally, I print all the unique elements.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(1)

## Language

C++

## What I Learned

- How to remove duplicate elements from an array
- Using nested loops for comparison
- Using a boolean variable to track duplicates
- Performing the operation in-place using the same array
- Time and space complexity