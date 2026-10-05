# Day 44 — Longest Substring Without Repeating Characters

## Problem

Given a string, find the length of the longest substring that contains no repeating characters.

A substring must contain continuous characters from the original string.

## Example

Input:

```text
"abcabcbb"
```

Output:

```text
3
```

Explanation:

The longest substring without repeating characters is:

```text
"abc"
```

Its length is `3`.

## Approach

I used the **Sliding Window** technique with a character index array.

I created `charIndex[256]` to store the last position of each character.

Initially, every position in the array is set to `-1`.

I used two important variables:

* `start` — stores the starting position of the current substring
* `i` — represents the current character position

For every character, I checked whether it had already appeared inside the current window.

If the character was repeated, I moved `start` to one position after its previous occurrence.

Then I updated the character's latest index and calculated the current substring length using:

```text
i - start + 1
```

Finally, I stored the maximum length found in `maxLength`.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(1)

The space complexity is O(1) because the character index array has a fixed size of 256.

## Language

* C++

## What I Learned

* How to find the longest substring without repeating characters
* How the Sliding Window technique works
* How to track the last position of a character
* How to move the starting point when a duplicate is found
* How to calculate substring length using indexes
* How to optimize a string problem to O(n)
* How to analyze time and space complexity

## LeetCode

[3 — Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
