# Day 32 — Next Greater Element

## Problem

Given an array, find the first greater element on the right side of each element.

If there is no greater element on the right side, return `-1`.

## Example

Input:

```text
[6, 4, 8, 3, 5, 2]
```

Output:

```text
8 8 -1 5 -1 -1
```

## Approach

For each element, I checked the elements on its right side using a nested loop.

If I found an element greater than the current element, I stored it in `RG` and used `break` because I only needed the first greater element.

If no greater element was found, `RG` remained `-1`.

I implemented the same logic in both Python and C++.

## Complexity

* Time Complexity: O(n²)
* Space Complexity: O(1)

## Language

* Python
* C++

## What I Learned

* How to find the next greater element
* How to search only on the right side of an element
* How to use nested loops for array problems
* How to use `break` after finding the required element
* How to handle cases where no greater element exists
* How to implement the same logic in Python and C++
* Time and space complexity
