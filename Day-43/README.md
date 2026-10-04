# Day 43 — Group Anagrams

## Problem

Given an array of strings, group all the anagrams together.

Two strings are anagrams if they contain the same characters with the same frequency, but their order can be different.

## Example

Input:

```text
["eat", "tea", "tan", "ate", "nat", "bat"]
```

Output:

```text
[
    ["eat", "tea", "ate"],
    ["tan", "nat"],
    ["bat"]
]
```

The order of the groups does not matter.

## Approach

I used a hash map concept to group the anagrams.

For every word, I sorted its characters and used the sorted string as a key.

For example:

```text
eat → aet
tea → aet
ate → aet
```

Since all three words produce the same sorted key `aet`, they are placed in the same group.

Similarly:

```text
tan → ant
nat → ant
```

Both are placed in the same group.

I implemented this approach in both C++ and Python.

## Complexity

Let `n` be the number of strings and `k` be the maximum length of a string.

* Time Complexity: O(n × k log k)
* Space Complexity: O(n × k)

The sorting of each string takes O(k log k).

## Language

* C++
* Python

## What I Learned

* How to identify anagrams
* How sorting can be used to create a common key
* How to group strings using a map/dictionary
* How to use `map` in C++
* How to use dictionaries in Python
* How to work with strings and sorting
* How to analyze time and space complexity

## LeetCode

[49 — Group Anagrams](https://leetcode.com/problems/group-anagrams/)
