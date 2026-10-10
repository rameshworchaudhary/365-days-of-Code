# Day 49 — Same Tree

## Problem

Given the roots of two binary trees, determine whether they are identical in structure and node values.

**LeetCode:** [100. Same Tree](https://leetcode.com/problems/same-tree/)

## Example

**Input**

```text
p = [1,2,3]
q = [1,2,3]
```

**Output**

```text
true
```

## Approach

* If both nodes are null, return `true`.
* If only one node is null, return `false`.
* If their values differ, return `false`.
* Recursively compare the left and right subtrees.

## Complexity

* **Time:** O(min(n, m)) in the worst case for the number of nodes compared.
* **Space:** O(min(h₁, h₂)) for the recursion stack, where h₁ and h₂ are the tree heights.

## Languages

* C++
* Python

## What I Learned

* Binary tree recursion
* Comparing tree structures and node values
* Base cases in recursive functions
