# Day 40 — Daily Temperatures

## Problem

Given an array of daily temperatures, find how many days we have to wait until a warmer temperature appears.

If there is no warmer temperature in the future, return `0`.

## Example

Input:

```text
[72, 73, 74, 75, 76, 77, 78, 79]
```

Output:

```text
1
1
1
1
1
1
1
0
```

## Approach

I used a brute-force approach with two nested loops.

For each temperature at index `i`, I checked all the temperatures on its right side using another loop with index `j`.

If `arr[j]` was greater than `arr[i]`, I calculated the number of days to wait using:

```text
j - i
```

Then I used `break` because I only needed the first warmer temperature.

If no warmer temperature was found, `answer` remained `0`.

## Complexity

* Time Complexity: O(n²)
* Space Complexity: O(1)

## Language

* C++

## What I Learned

* How to compare each element with the elements on its right
* How to find the first warmer temperature
* How to calculate the number of days using index difference
* How to use nested loops for brute-force solutions
* How to use `break` after finding the required element
* How to handle cases where no warmer temperature exists
* How to analyze time and space complexity

## LeetCode

[739 — Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)
