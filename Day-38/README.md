# Day 39 — Valid Parentheses

## Problem

Given a string containing `()`, `{}` and `[]`, determine whether all opening brackets are closed by the correct type of closing bracket in the correct order.

## Example

**Input:**

```text
{[()]}
```

**Output:**

```text
The parentheses are valid.
```

**Invalid example:**

```text
Input: ([)]
Output: The parentheses are not valid.
```

## Approach

I used a stack to check whether the parentheses are balanced and correctly ordered.

I traversed the string character by character. Whenever I encountered an opening bracket, I pushed it onto the stack.

For each closing bracket, I checked whether the stack was empty. If it was empty, the string was invalid. Otherwise, I compared the closing bracket with the opening bracket at the top of the stack.

If the brackets matched, I removed the opening bracket using `pop()`. If they did not match, I returned `false`.

After traversing the entire string, I checked whether the stack was empty. An empty stack means all brackets were matched correctly.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

## Language

* C++
* Python (to be implemented)

## What I Learned

* How to use a stack to validate parentheses
* How the LIFO (Last In, First Out) principle works
* How to use `push()`, `pop()`, `top()` and `empty()`
* How to match different types of brackets
* How to detect invalid bracket sequences
* How to analyze time and space complexity

## LeetCode

[20 — Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
