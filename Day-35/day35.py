nums = [1, 2, 3, 4, 5]

n = len(nums)

k = 3

for i in range(n):
    print(nums[(i-k+n)%n], end = " ")