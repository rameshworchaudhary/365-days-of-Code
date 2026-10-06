# Day 45 — Longest Palindromic Substring

## Problem

Given a string, find the longest substring that is a palindrome.

A palindrome is a string that reads the same from left to right and right to left.

## Example

Input:

```text
babad
```

Output:

```text
bab
```

`aba` is also a valid answer.

Another example:

```text
Input:
cbbd

Output:
bb
```

## Approach

I used a brute-force approach to find the longest palindromic substring.

First, I generated all possible substrings using two loops.

For every substring, I checked whether it was a palindrome by comparing characters from both ends.

The comparison was done using:

```text
s[i + k] == s[j - k]
```

If the characters were different, the substring was not a palindrome.

If the substring was a palindrome and its length was greater than the current `maxlen`, I updated `start` and `maxlen`.

Finally, I used `substr()` to print the longest palindromic substring.

## Complexity

* Time Complexity: O(n³)
* Space Complexity: O(1)

The time complexity is O(n³) because:

* Two loops generate substrings.
* Another loop checks whether each substring is a palindrome.

## Language

* C++

## What I Learned

* How to find palindromic substrings
* How to check whether a string is a palindrome
* How to generate all possible substrings
* How to compare characters from both ends
* How to use `substr()` in C++
* How to track the longest substring
* How to analyze time and space complexity

## LeetCode

[5 — Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)
