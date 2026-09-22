List = [1,2,3,-3,4,5,6,7,-1,2]
currSum = 0
maxSum = 0
for i in range(len(List)):
    currSum += List[i]
    if currSum < 0:
        currSum = 0
    maxSum = max(maxSum, currSum)
print(maxSum)
