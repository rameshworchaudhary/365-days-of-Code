# Day 55 — Subtree of Another Tree

## Problem
Given the roots of two binary trees, determine whether `subRoot` is a subtree of `root` with exactly the same structure and node values.

**LeetCode:** [572. Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)

## Example

**Input**
```text
root = [3,4,5,1,2]
subRoot = [4,1,2]
```

**Output**
```text
true
```

## Approach
- Use recursion to visit each node in the main tree.
- Compare the current subtree with `subRoot` using a helper function.
- Check that corresponding node values and left/right structures match.
- Return `true` if a match is found; otherwise, search both subtrees.

## Complexity
- **Time:** O(n × m) in the worst case, where n and m are the node counts of the two trees.
- **Auxiliary Space:** O(h₁ + h₂) for recursive calls, where h₁ and h₂ are the tree heights.

## Languages
- C++
- Python

## What I Learned
- Binary tree recursion
- Comparing two trees
- Depth-First Search (DFS)
- Checking subtree structure and node values