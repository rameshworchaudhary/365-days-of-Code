# Day 7 — Find the largest Element

## 🧩 Problem

Given an integer array, find the **largest element** in the array.

### Example

**Input:**

```text
[10,40,100,50,60]
```

**Output:**

```text
100
```

## 💡 Approach

I initialized a variable `largest` with the first element of the array.

Then, I traversed the array using a `for` loop and compared each element with `largest`.

If the current element is largest, I updated the `largest` variable.

Finally, I printed the largest element.

### Core Logic

```cpp
int largest = arr[0];

for(int i = 0; i < 5; i++){
    if(arr[i] > largest){
        largest = arr[i];
    }
}
```

## 💻 Language

C++

## ⏱️ Complexity

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`

## 🧠 What I Learned

* How to find the maximum element in an array
* How to initialize a variable with the first array element
* How to compare array elements using a loop
* How to update the maxmimum value when a largest element is found
* Understanding `O(n)` time complexity and `O(1)` space complexity

## ✅ Status

**Day 7 Completed**

> One day. One problem. One commit. 🔥
