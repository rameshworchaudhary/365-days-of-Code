# Day 6 — Count Words in a String

## 🧩 Problem

Given a sentence, count the total number of words present in the string.

### Example

**Input:**

```text
I love you
```

**Output:**

```text
3
```

## 💡 Approach

I used a `for` loop to traverse the complete string.

Whenever a space (`' '`) is found, I increment the `count` variable.

Since the number of words is normally one more than the number of spaces, I print:

```cpp
count + 1
```

### Example

```text
I love you
```

There are 2 spaces, so:

```text
2 + 1 = 3 words
```

## 💻 Language

C++

## ⏱️ Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

## 🧠 What I Learned

* How to traverse a string using a loop
* How to check for spaces using `s[i] == ' '`
* How to count occurrences of a character
* How the number of spaces can be used to calculate the number of words
* Basic string traversal and manipulation

## ⚠️ Note

This approach assumes that words are separated by a **single space**.

## ✅ Status

**Day 5 Completed**

> One day. One problem. One commit. 🔥
