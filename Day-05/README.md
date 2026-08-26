# Day 5 — Check Palindrome String

## 🧩 Problem

Given a string, check whether it is a **palindrome** or not.

A palindrome is a string that remains the same when read from both directions.

### Example

**Input:**

```text
Ishwor
```

**Output:**

```text
Not a Palindrome
```

Another example:

**Input:**

```text
level
```

**Output:**

```text
Palindrome
```

## 💡 Approach

I compared each character with its corresponding character from the end of the string.

For every index `i`, I compared:

```cpp
s[i] != s[s.length() - 1 - i]
```

If any pair of characters does not match, the string is **Not a Palindrome**.

If the complete loop finishes without finding any mismatch, the string is a **Palindrome**.

## 💻 Language

C++

## ⏱️ Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

## 🧠 What I Learned

* How to access characters from both ends of a string
* How to compare characters using string indexing
* How to use `return 0` to stop the program when a mismatch is found
* How to use a loop to check palindrome conditions
* Understanding the difference between checking a condition and completing the entire loop

## ✅ Status

**Day 4 Completed**

> One day. One problem. One commit. 🔥
