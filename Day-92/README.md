# Day 92 - Lowest Common Ancestor of a Binary Tree

## Problem

Given a binary tree and two nodes `p` and `q`, find their lowest common
ancestor (LCA). The LCA is the lowest node that has both `p` and `q` in its
subtree, where a node can also be a descendant of itself.

## Example

```text
Input:
        3
       / \
      5   1
     / \ / \
    6  2 0  8
      / \
     7   4

p = 5, q = 1

Output: 3
```

## Approach

Use recursive depth-first traversal. If the current node is `null`, return
`null`. If the current node is `p` or `q`, return it. Search recursively in
the left and right subtrees. If both sides return a node, the current node is
the lowest common ancestor. Otherwise, return whichever side contains a match.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

Here, `n` is the number of nodes and `h` is the height of the binary tree.

## Language

* C++

## What I Learned

* The lowest common ancestor is the first node where two target paths meet
* Recursive traversal can solve this by propagating matches upward
* A node that matches `p` or `q` can be treated as an ancestor boundary

## LeetCode

[236 - Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)
