nums = [4,7,2,9,8,1,5,6,3]

min_diff = float('inf')

for i in range(len(nums)):
    for j in range(i + 1, len(nums)):
        diff = abs(nums[i] - nums[j])
        if (diff <min_diff):
            min_diff = diff
print("The minimum difference is:", min_diff)