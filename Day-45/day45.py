s = input("Enter the string: ")

n = len(s)
start = 0
max_len = 1

for i in range(n):
    for j in range(i, n):
        flag = True

        for k in range((j - i + 1) // 2):
            if s[i + k] != s[j - k]:
                flag = False
                break

        if flag and (j - i + 1) > max_len:
            start = i
            max_len = j - i + 1

print(s[start:start + max_len])