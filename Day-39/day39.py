nums = [72, 73, 74, 75, 76, 77, 78, 79]
n = 8

for i in range(n):
    answer = 0
    for j in range(i + 1, n):
        if nums[i] < nums[j]:
            answer = j - i
            break
    print(answer)
    