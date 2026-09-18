# Day 27 — Maximum Consecutive 1s

## Problem

Given an array containing only `0` and `1`, find the maximum number of consecutive `1s` in the array.

## Example

Input:
[1, 0, 1, 1, 1, 1]

Output:
Maximum consecutive 1s: 4

## Approach

I used two variables: `count` to keep track of the current consecutive `1s` and `maxCount` to store the maximum consecutive count found so far.

Whenever the current element is `1`, I incremented `count` and updated `maxCount`.

Whenever the current element is `0`, I reset `count` to `0`.

I implemented the same logic in both Python and C++.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Language

* Python
* C++

## What I Learned

* How to find consecutive elements in an array
* How to maintain a running count
* How to reset a counter when a condition changes
* How to track the maximum value during traversal
* How to implement the same logic in Python and C++
* Time and space complexity
