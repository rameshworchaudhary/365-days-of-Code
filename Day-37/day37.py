nums = [1, 8, 6, 2, 5, 4, 8, 3, 7]
n = len(nums)
max_area = 0
left = 0
right = n - 1

while left < right:
    height = min(nums[left], nums[right])
    width = right - left
    area = height * width

    max_area = max(max_area, area)
    if nums[left] < nums[right]:
        left += 1
    else:
        right -= 1

print(max_area)