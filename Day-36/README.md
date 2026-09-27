# Day 36 — Subarray Sum Equals K

## Problem

Given an integer array `nums` and an integer `k`, find the total number of continuous subarrays whose sum is exactly equal to `k`.

## Example

**Input:**

```
nums = [1, 2, 3, 4, 5, 6]
k = 7
```

**Output:**

```
The number of subarrays with sum equal to 7 is: 1
```

**Explanation:**

The subarray `[3, 4]` has a sum of `7`.

## Approach

I used a brute-force approach with two nested loops to check all possible subarrays.

The outer loop selects the starting index of each subarray, while the inner loop extends the subarray and calculates its running sum using `subSum`.

Whenever `subSum` equals `k`, I increment `count`.

After completing the inner loop, I reset `subSum` to `0` for the next starting index.

The same approach can be implemented in Python and C++.

## Complexity

* Time Complexity: O(n²)
* Space Complexity: O(1)

## Language

* C++
* Python (to be implemented)

## What I Learned

* How to find continuous subarrays
* How to calculate a running sum
* How to use nested loops to check all possible subarrays
* How to count subarrays whose sum equals a target
* How to reset the running sum for each starting index
* How to analyze time and space complexity

## LeetCode

[560 — Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)
