#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(height[0]);

    int totalWater = 0;

    for (int i = 0; i < n; i++) {

        int leftMax = 0;
        int rightMax = 0;

        // Find maximum height on the left
        for (int j = 0; j < i; j++) {
            leftMax = max(leftMax, height[j]);
        }

        // Find maximum height on the right
        for (int j = i + 1; j < n; j++) {
            rightMax = max(rightMax, height[j]);
        }

        int water = min(leftMax, rightMax) - height[i];

        if (water > 0) {
            totalWater += water;
        }
    }

    cout << "Total trapped water: " << totalWater << endl;

    return 0;
}