nums = [1,2,3,5,6,7]

for i in range(len(nums)):
    RG = -1
    for j in range(len(nums[i + 1:])):
        if nums[j + i + 1] > nums[i]:
            RG = nums[j + i + 1 ]
            break
    print(RG)