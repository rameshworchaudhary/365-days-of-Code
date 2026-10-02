nums = [1,1,2,2,3,3,4,4,5,5]
n = 10

# Remove duplicates
i = 0
while i < n - 1:
    if nums[i] == nums[i + 1]:
        nums.pop(i)
        n -= 1
    else:
        i += 1
        
print("Array after removing duplicates:", nums)
