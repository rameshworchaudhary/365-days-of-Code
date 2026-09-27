nums = [1, 2, 3, 4, 5, 6]
k = 3
SubSum = 0
count = 0

for i in range(len(nums)):
    SubSum += nums[i]
    if i >= k - 1:
        SubSum -= nums[i - (k - 1)]
        count += 1
        if count == k:
            break
        
print(f"Total number of subarrays of size {k}: {count}")
        
        