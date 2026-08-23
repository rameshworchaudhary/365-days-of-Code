# Day 2 — Reverse a String

## 🧩 Problem

Given a string, reverse the string and print the characters in reverse order.

### Example

**Input:**

```text
Ishwor
```

**Output:**

```text
rowhsI
```

## 💡 Approach

I used a `for` loop and started from the last index of the string.

The last character is accessed using:

```cpp
s[s.length() - 1]
```

Then I moved backwards until the first character and printed each character.

## 💻 Language

C++

## ⏱️ Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

## 🧠 What I Learned

* How to declare and use a `string` in C++
* How to find the length of a string using `length()`
* How to access individual characters using indexing
* How to traverse a string backwards using a loop
* Basic string manipulation

## ✅ Status

**Day 2 Completed**

> One day. One problem. One commit. 🔥
