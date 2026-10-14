# Day 53 — Path Sum II

## Problem
Given the root of a binary tree and an integer `targetSum`, find all root-to-leaf paths whose node values add up to the target sum.

**LeetCode:** [113. Path Sum II](https://leetcode.com/problems/path-sum-ii/)

## Example

**Input**
```text
root = [5,4,8,11,null,13,4,7,2,null,null,5,1]
targetSum = 22
```

**Output**
```text
[[5,4,11,2],[5,8,4,5]]
```

**Explanation:**
- `5 + 4 + 11 + 2 = 22`
- `5 + 8 + 4 + 5 = 22`

## Approach
- Use Depth-First Search (DFS) to explore each root-to-leaf path.
- Add the current node to the path and subtract its value from the remaining target.
- If a leaf is reached and the remaining target is zero, store a copy of the path.
- Backtrack by removing the last node before exploring another path.

## Complexity
- **Time:** O(n²) in the worst case, including copying paths into the result.
- **Auxiliary Space:** O(h) for the recursion stack and current path, where h is the tree height.
- **Output Space:** Depends on the number and lengths of valid paths; worst case O(n²).

## Languages
- C++
- Python

## What I Learned
- Binary tree traversal using DFS
- Backtracking and path tracking
- Finding all root-to-leaf paths that satisfy a condition
- Managing recursive function calls