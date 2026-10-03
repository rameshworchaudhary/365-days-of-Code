nums1 = [1,2,3,4,5]
nums2 = [6,7,8,9,10]
merged_array = []
i = 0
j = 0
while i < len(nums1) and j < len(nums2):
    if nums1[i] < nums2[j]:
        merged_array.append(nums1[i])
        i += 1
    else:
        merged_array.append(nums2[j])
        j += 1
while i < len(nums1):
    merged_array.append(nums1[i])
    i += 1
while j < len(nums2):
    merged_array.append(nums2[j])
    j += 1

print(merged_array)