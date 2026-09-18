list = [1,0,1,1,1,1]
count = 0
maxCount = 0
for i in range(len(list)):
    if(list[i]== 1):
        count += 1
        maxCount = max(maxCount, count)
    else:
        count = 0
    
print(maxCount)