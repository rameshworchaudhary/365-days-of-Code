nums = [1,2,3,4,5]

for i in range(len(nums)):
    result = 1
    for j in range(len(nums)):
        if(i != j):
            result *= nums[j]
    print(result)