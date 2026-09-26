# Day 35 — Rotate Array

## Problem

Given an integer array and a number `k`, rotate the array to the right by `k` positions.

## Example

**Input:**

```text
nums = [1, 2, 3, 4, 5]
k = 3
```

**Output:**

```text
3 4 5 1 2
```

## Approach

I used the modulo operator to calculate the correct index of each element after rotating the array.

For each position, I calculated the original index using:

`(i - k + n) % n`

Here, `i` is the current index, `k` is the number of rotations, and `n` is the array size.

I printed the elements in their rotated order without modifying the original array.

I implemented the same logic in both Python and C++.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Language

* Python
* C++

## What I Learned

* How to rotate an array to the right
* How to use the modulo operator for circular indexing
* How to calculate the correct index after rotation
* How to handle array indexing in Python and C++
* How to print a rotated array without using extra space
* Time and space complexity

**Note:** This solution prints the rotated array. It does not modify the original array in place.
