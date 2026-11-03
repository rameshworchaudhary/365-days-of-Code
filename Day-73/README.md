# Day 73 — Convert Sorted Array to Binary Search Tree

## Problem
Convert a sorted integer array into a height-balanced Binary Search Tree.

**LeetCode:** [108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)

**Difficulty:** Easy

## Example

**Input:**
```text
nums = [-10, -3, 0, 5, 9]
```

**Output:**
```text
[0, -3, 9, -10, null, 5]
```

## Approach
1. Find the middle element of the sorted array.
2. Create a root node using the middle element.
3. Recursively construct the left subtree.
4. Recursively construct the right subtree.
5. Return the root node.

## Algorithm
- Base case: If left is greater than right, return NULL.
- Calculate the middle index.
- Create a new tree node.
- Build left and right subtrees recursively.
- Return the root.

## Complexity Analysis
- Time Complexity: O(n)
- Auxiliary Space: O(log n)

## Languages
- C++
- Python

## Concepts Learned
- Binary Search Tree
- Recursion
- Divide and Conquer
- Balanced Binary Tree

## Learning Outcome
Learned how to construct a height-balanced Binary Search Tree from a sorted array using recursion and the divide-and-conquer technique.