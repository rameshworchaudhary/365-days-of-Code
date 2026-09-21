# Day 30 — Trapping Rain Water

## Problem

Given an array where each element represents the height of a vertical bar, calculate the total amount of rainwater that can be trapped between the bars.

## Example

Input:
[0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]

Output:
Total trapped water: 6

## Approach

For every position in the array, I found the maximum height on the left side and the maximum height on the right side.

The amount of water that can be trapped at a position is calculated using:

`water = min(leftMax, rightMax) - height[i]`

If the calculated water is positive, I added it to the total trapped water.

I implemented the same brute-force approach in both Python and C++.

## Complexity

* Time Complexity: O(n²)
* Space Complexity: O(1)

## Language

* Python
* C++

## What I Learned

* How rainwater trapping works using left and right boundaries
* How to find maximum values on both sides of an element
* How to calculate water trapped at each position
* How to use nested loops for array problems
* How to implement the same logic in Python and C++
* Time and space complexity
