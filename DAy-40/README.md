# 🚀 Day 40 of My DSA Journey

## ✅ Day 40 Completed

Today I solved **LeetCode 560 - Subarray Sum Equals K**.

### 🧩 Problem

Given an integer array `nums` and an integer `k`, find the total number of continuous subarrays whose sum is equal to `k`.

### 💡 Approach

I solved this problem using:

* Prefix Sum
* Hash Map
* Frequency Counting

The key idea is:

```text
Current Prefix Sum - Previous Prefix Sum = K
```

So, for every current prefix sum, I check whether:

```text
Current Prefix Sum - K
```

has already appeared.

### 📌 Example

```text
Input:
nums = [1, 2, 3]
k = 3

Output:
2
```

The valid subarrays are:

```text
[1, 2] → 3
[3]    → 3
```

### ⏱️ Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(n)
```

### 💻 Languages

* C++
* Python

### 📚 What I Learned

Today I learned how **Prefix Sum and Hash Map** can be combined to efficiently solve subarray problems.

Instead of checking every possible subarray, the hash map helps us find the required previous prefix sum in constant average time.

---

## 🔥 Progress

**Day 40 / DSA Journey Completed ✅**

40 days of consistent learning and problem solving.

**Keep Learning. Keep Coding. Keep Improving. 💻🔥**
