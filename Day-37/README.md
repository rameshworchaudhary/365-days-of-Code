# Day 37 — Container With Most Water

## Problem

Given an integer array representing the heights of vertical lines, find two lines that together form a container capable of storing the maximum amount of water.

## Example

**Input:**

```text
height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
```

**Output:**

```text
49
```

**Explanation:**

The maximum area is formed between the lines at indices `1` and `8`.

* Height = min(8, 7) = 7
* Width = 8 - 1 = 7
* Maximum Area = 7 × 7 = 49

## Approach

I used the optimized Two Pointer approach to find the maximum area.

I initialized two pointers, `left` at the beginning of the array and `right` at the end.

For each pair of lines, I calculated the height using the smaller of the two lines and the width using the distance between the pointers.

I calculated the area using:

`area = min(height[left], height[right]) * (right - left)`

I updated `maxArea` whenever a larger area was found.

After each iteration, I moved the pointer pointing to the shorter line inward because the shorter line limits the container's height.

I continued this process until both pointers met.

I implemented the same optimized approach in Python and C++.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Language

* Python
* C++

## What I Learned

* How to solve the Container With Most Water problem
* How to use the Two Pointer technique
* How to calculate the area between two vertical lines
* How to move pointers efficiently
* How to optimize a brute-force solution from O(n²) to O(n)
* How to implement the same algorithm in Python and C++
* How to analyze time and space complexity

## LeetCode

[11 — Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
