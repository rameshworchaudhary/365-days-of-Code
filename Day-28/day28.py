list = [1,3,4,5,-1,-2]
n = len(list)
missing = 1

if missing in list:
    while missing in list:
        missing += 1
print(missing)
