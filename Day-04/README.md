Move Zeroes – DSA
📌 Problem
Given an integer array, move all 0s to the end of the array while maintaining the relative order of all non-zero elements.

The operation must be performed in-place without using an extra array.

💡 Approach
I used the Two Pointer Technique.
i traverses the complete array.
j keeps track of the position where the next non-zero element should be placed.
Whenever arr[i] is non-zero, swap arr[i] with arr[j].
Increment j.

This automatically moves all zeroes to the end.

🔍 Example
Input:
[1, 2, 0, 0, 0, 4, 5, 7, 0, 0, 0, 8, 9, 0, 0, 0, 10]
Output:
[1, 2, 4, 5, 7, 8, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0]
⏱️ Complexity
Complexity	Value
Time	O(n)
Space	O(1)

🛠️ Concepts Used
Arrays
Two Pointer Technique
In-place Array Manipulation
swap()
💻 Language
C++
🎯 Key Learning
The two-pointer technique allows us to rearrange the array efficiently without creating an additional array, making the solution both time-efficient and memory-efficient.