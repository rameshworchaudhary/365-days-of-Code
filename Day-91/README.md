# Day 91 — Subtree of Another Tree

## Problem

Given the roots of two binary trees `root` and `subRoot`, return `true` if
`subRoot` is a subtree of `root`. A tree is a subtree when it matches one of
the nodes in the larger tree together with all of that node's descendants.

## Example

```text
root:     3
         / \
        4   5
       / \
      1   2

subRoot:  4
         / \
        1   2

Output: true
```

## Approach

Traverse every node in `root`. At each node, first check whether the two trees
are identical. If they are not, recursively search the left and right
subtrees. The identical-tree check compares values and both child subtrees,
including null children, so tree structure is preserved.

## Complexity

* Time Complexity: O(m × n) in the worst case
* Space Complexity: O(m + n)

Here, `m` and `n` are the number of nodes in `root` and `subRoot`. The space
usage is the recursion depth of the two tree traversals.

## Language

* C++

## What I Learned

* Why matching values alone is not enough to identify a subtree
* How a reusable identical-tree helper simplifies recursive tree matching
* How null children ensure that the complete tree structure is compared

## LeetCode

[572 — Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)
