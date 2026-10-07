# Day 46 — Binary Tree Level Order Traversal

## Problem

Given the root of a binary tree, return the level order traversal of its nodes.

Level order traversal visits the nodes level by level, from left to right.

## Example

Binary Tree:

```text
        1
       / \
      2   3
     / \   \
    4   5   6
```

Input:

```text
[1, 2, 3, 4, 5, null, 6]
```

Output:

```text
[
    [1],
    [2, 3],
    [4, 5, 6]
]
```

## Approach

I used **Breadth-First Search (BFS)** with a **Queue**.

First, I inserted the root node into the queue.

Then, while the queue was not empty, I processed all nodes belonging to the current level.

For every node:

1. Remove the node from the front of the queue.
2. Add its value to the current level.
3. Add its left child to the queue if it exists.
4. Add its right child to the queue if it exists.

After processing one complete level, I stored that level in the result.

The same approach was implemented in both C++ and Python.

## Algorithm

```text
Start with root
      ↓
Put root into Queue
      ↓
While Queue is not empty
      ↓
Process current level
      ↓
Add left and right children
      ↓
Move to next level
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

## What I Learned

* How to perform level order traversal
* How BFS works on a binary tree
* How to use a queue for tree traversal
* How to process a tree level by level
* How to add left and right child nodes to a queue
* How to implement BFS in both C++ and Python
* How to analyze time and space complexity

## LeetCode

[102 — Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)
