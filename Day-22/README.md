# Day 22 — Find the Union of Two Arrays

## Problem

Given two integer arrays, find the union of both arrays without repeating duplicate elements.

## Example

Input:
Array 1 = [1, 2, 3, 4, 5, 6]
Array 2 = [7, 8, 9, 10, 11, 12]

Output:
Union elements are: 1 2 3 4 5 6 7 8 9 10 11 12

## Approach

Used two arrays and an extra array to store the union elements.

First, I added the elements of the first array to the union array.

Then, I checked each element of the second array against the elements already stored in the union array.

If the element was not already present, I added it to the union array.

Finally, I printed all the union elements.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(n)

## Language

C++

## What I Learned

- How to find the union of two arrays
- How to check whether an element already exists
- Using nested loops for comparison
- Using an extra array to store unique elements
- Time and space complexity