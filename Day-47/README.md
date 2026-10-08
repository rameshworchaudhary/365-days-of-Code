# Day 47 — Binary Tree Zigzag Level Order Traversal

## Problem

Given the root of a binary tree, return its zigzag level order traversal.

In zigzag traversal:

* The first level is traversed from left to right.
* The second level is traversed from right to left.
* The third level is traversed from left to right.
* This pattern continues for every level.

## Example

Binary Tree:

```text
        1
       / \
      2   3
     / \ / \
    4  5 6  7
```

Input:

```text
[1, 2, 3, 4, 5, 6, 7]
```

Output:

```text
[
    [1],
    [3, 2],
    [4, 5, 6, 7]
]
```

## Approach

I used **Breadth-First Search (BFS)** with a **Queue**.

First, I inserted the root node into the queue.

For every level, I processed all nodes currently present in the queue and stored their values in a temporary `level` vector.

I used a boolean variable `leftToRight` to determine the traversal direction.

If `leftToRight` was `true`, the level was kept in its normal order.

If it was `false`, I reversed the level before adding it to the result.

After processing each level, I changed the value of `leftToRight` so that the direction alternated between levels.

## Algorithm

```text
Start with root
      ↓
Put root into Queue
      ↓
Process current level using BFS
      ↓
Store node values
      ↓
If direction is right-to-left
reverse the current level
      ↓
Add level to result
      ↓
Change traversal direction
      ↓
Repeat until Queue is empty
```

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

Where `n` is the number of nodes in the binary tree.

## Language

* C++
* Python

## Algorithm Used

* Breadth-First Search (BFS)
* Queue
* Level Order Traversal
* Two-direction / Zigzag Traversal

## What I Learned

* How to perform zigzag traversal of a binary tree
* How BFS works with a queue
* How to process a tree level by level
* How to alternate traversal direction
* How to use `reverse()` in C++
* How to use `reverse()` in Python
* How to implement the same algorithm in C++ and Python
* How to analyze time and space complexity

## LeetCode

[103 — Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)
