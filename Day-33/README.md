# Day 33 — Minimum Difference Pair

## Problem

Given an integer array, find the minimum absolute difference between any two elements in the array.

## Example

Input:

```text
[1, 5, 3, 19, 18]
```

Output:

```text
Minimum Difference is: 1
```

## Approach

I used nested loops to compare every pair of elements in the array.

For each pair, I calculated the absolute difference using `abs()`.

I stored the smallest difference found so far in `MinDif`.

I initialized `MinDif` with `INT_MAX` so that the first calculated difference would be smaller and could update the minimum value.

I implemented the same logic in both Python and C++.

## Complexity

* Time Complexity: O(n²)
* Space Complexity: O(1)

## Language

* Python
* C++

## What I Learned

* How to find the minimum difference between two elements
* How to calculate absolute difference using `abs()`
* How to compare every pair using nested loops
* How to use `INT_MAX` as an initial minimum value in C++
* How to update the minimum value during traversal
* How to implement the same logic in Python and C++
* Time and space complexity
