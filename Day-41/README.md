# Day 41 — Remove Duplicates from Sorted Array

## Problem

Given a sorted integer array, remove the duplicate elements in-place so that each element appears only once.

Return the number of unique elements.

## Example

Input:

```text
[1, 1, 2, 2, 3, 4, 4, 5]
```

Output:

```text
Array after removing duplicates: 1 2 3 4 5
```

## Approach

I used a two-pointer approach to remove duplicate elements from the sorted array.

I used two variables, `i` and `j`.

The `i` pointer checks the current element and the next element.

If `arr[i]` and `arr[i + 1]` are different, the current element is unique, so I stored it at position `j`.

After the loop, I stored the last element separately because the loop only runs until `n - 1`.

The array is modified in-place, so no extra array is required.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Language

* C++

## What I Learned

* How to remove duplicate elements from a sorted array
* How to use two pointers
* How to modify an array in-place
* How to compare adjacent elements
* How to use `j` to store unique elements
* How to achieve O(n) time complexity
* How to achieve O(1) extra space
* How to implement an array problem efficiently

## LeetCode

[26 — Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
