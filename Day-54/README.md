# Day 54 — Lowest Common Ancestor of a Binary Tree

## Problem
Given a binary tree and two nodes `p` and `q`, find their lowest common ancestor (LCA). The LCA is the deepest node that has both nodes as descendants. A node can be its own descendant.

**LeetCode:** [236. Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)

## Example

**Input**
```text
root = [3,5,1,6,2,0,8,null,null,7,4]
p = 5
q = 1
```

**Output**
```text
3
```

**Explanation:** Node `3` is the lowest common ancestor of nodes `5` and `1`.

## Approach
- If the current node is `null`, `p`, or `q`, return it.
- Recursively search the left and right subtrees.
- If both subtrees return a node, the current node is the LCA.
- Otherwise, return the non-null result.

## Complexity
- **Time:** O(n), where n is the number of nodes.
- **Auxiliary Space:** O(h) for the recursion stack, where h is the tree height. Worst case: O(n).

## Languages
- C++
- Python

## What I Learned
- Binary tree recursion
- Depth-First Search (DFS)
- Lowest Common Ancestor (LCA)
- Combining results from recursive calls