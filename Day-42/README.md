# Day 42 — Merge Two Sorted Arrays

## Problem

Given two sorted integer arrays, merge them into one sorted array.

The final merged array should contain all elements from both arrays in sorted order.

## Example

Input:

```text
arr1 = [1, 2, 3, 4, 5]
arr2 = [6, 7, 8, 9, 10]
```

Output:

```text
1 2 3 4 5 6 7 8 9 10
```

## Approach

I used the two-pointer approach to merge the two sorted arrays.

I used three variables:

* `i` to traverse `arr1`
* `j` to traverse `arr2`
* `k` to store elements in the `merged` array

While both arrays had remaining elements, I compared `arr1[i]` and `arr2[j]`.

The smaller element was inserted into the merged array, and its corresponding pointer was moved forward.

After one array was completely traversed, I copied the remaining elements from the other array.

Finally, I printed the merged sorted array.

## Complexity

* Time Complexity: O(n + m)
* Space Complexity: O(n + m)

Where `n` is the size of the first array and `m` is the size of the second array.

## Language

* C++

## What I Learned

* How to merge two sorted arrays
* How to use multiple pointers
* How to compare elements from two arrays
* How to handle remaining elements after one array ends
* How the two-pointer technique works
* How to analyze time and space complexity

## LeetCode

This problem is related to:

[88 — Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)
