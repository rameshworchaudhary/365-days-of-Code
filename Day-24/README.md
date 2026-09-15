# Day 24 — Find the Leaders in an Array

## Problem

Given an integer array, find all the leader elements in the array.

An element is called a leader if there is no greater element on its right side. The last element is always a leader.

## Example

Input:
[16, 17, 5, 4, 8, 2]

Output:
17 8 2

## Approach

Used a brute-force approach with nested loops.

For every element, I checked all the elements on its right side.

If a greater element was found, I marked the current element as not a leader.

If no greater element was found, I printed the current element as a leader.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(1)

## Language

C++

## What I Learned

- How to find leader elements in an array
- How to compare an element with the elements on its right
- Using nested loops
- Using a boolean variable to track whether an element is a leader
- Time and space complexity