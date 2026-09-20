# Day 29 — Product of Array Except Self

## Problem

Given an integer array, find the product of all elements except the element at the current index.

## Example

Input:
[1, 2, 3, 4, 5]

Output:
120
60
40
30
24

## Approach

For each element, I initialized `result` as `1`.

Then, I used a nested loop to traverse the complete array.

If the current index was different from the outer loop index, I multiplied the element with `result`.

This way, the current element was excluded from the product.

I implemented the same logic in both Python and C++.

## Complexity

* Time Complexity: O(n²)
* Space Complexity: O(1)

## Language

* Python
* C++

## What I Learned

* How to calculate the product of all elements except the current element
* How to use nested loops for array problems
* How to skip an element using its index
* How to implement the same logic in Python and C++
* Time and space complexity
