height = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]

totalWater = 0

for i in range(len(height)):
    leftMax = 0
    rightMax = 0

    # Find maximum height on the left
    for j in range(i):
        leftMax = max(leftMax, height[j])

    # Find maximum height on the right
    for j in range(i + 1, len(height)):
        rightMax = max(rightMax, height[j])

    water = min(leftMax, rightMax) - height[i]

    if water > 0:
        totalWater += water

print("Total trapped water:", totalWater)