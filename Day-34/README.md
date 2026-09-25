# Day 34 — Best Time to Buy and Sell Stock

## Problem

Given an array representing stock prices on different days, find the maximum profit by buying a stock on one day and selling it on a later day.

If no profit is possible, return `0`.

## Example

**Input:**

```text
[7, 1, 5, 3, 6, 4]
```

**Output:**

```text
5
```

**Explanation:**

Buy at price `1` and sell at price `6`.

Maximum Profit = `6 - 1 = 5`

## Approach

I used an optimized single-pass approach to find the maximum profit.

I maintained two variables: `minPrice` to track the minimum stock price encountered so far and `maxProfit` to store the maximum profit.

For each stock price, I checked whether it was lower than `minPrice`. If it was, I updated `minPrice`.

Otherwise, I calculated the possible profit and updated `maxProfit` whenever a higher profit was found.

I implemented the same approach in both Python and C++.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

## Language

* Python
* C++

## What I Learned

* How to find the maximum profit from stock prices
* How to track the minimum value during array traversal
* How to calculate and update the maximum profit
* How to solve an array problem using a single loop
* How to implement the same optimized logic in Python and C++
* Time and space complexity
