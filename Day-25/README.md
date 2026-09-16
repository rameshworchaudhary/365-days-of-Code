# Day 25 — Find the Equilibrium Index

## Problem

Given an integer array, find an index where the sum of all elements on the left is equal to the sum of all elements on the right.

## Example

Input:
[1, 3, 5, 2, 2]

Output:
Equilibrium index: 2

## Approach

First, I calculated the total sum of all elements in the array.

Then, I traversed the array and calculated the right sum by subtracting the current element and the left sum from the total sum.

If the left sum and right sum are equal, I found the equilibrium index.

Finally, I updated the left sum after checking each index.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Language

C++

## What I Learned

* How to find an equilibrium index in an array
* How to calculate left and right sums
* How to use the total sum to calculate the right sum
* How to ignore the current element while comparing both sides
* Time and space complexity
