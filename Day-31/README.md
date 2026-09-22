Day 31 — Maximum Subarray Sum
Problem
Given an integer array, find the maximum possible sum of a contiguous subarray.

Example
Input:


[1, 2, 3, -3, 4, 5, 6, 7, -1, 2]
Output:


26
Approach
I used two variables: currSum to store the current subarray sum and maxSum to store the maximum sum found so far.

For each element, I added it to currSum.

If currSum became negative, I reset it to 0 because a negative sum would reduce the sum of a future subarray.

After each iteration, I updated maxSum using the maximum of maxSum and currSum.

I implemented the same logic in both Python and C++.

Complexity
Time Complexity: O(n)

Space Complexity: O(1)

Language
Python

C++

What I Learned
How to find the maximum sum of a contiguous subarray

How Kadane's Algorithm works

How to maintain a running sum

How to reset the sum when it becomes negative

How to track the maximum value during array traversal

How to implement the same logic in Python and C++

Time and space complexity