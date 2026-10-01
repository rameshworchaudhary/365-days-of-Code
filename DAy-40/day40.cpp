#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSum;

    // Prefix sum 0 occurs once before starting the array
    prefixSum[0] = 1;

    int sum = 0;
    int count = 0;

    for (int num : nums) {
        sum += num;

        // Check whether (sum - k) appeared before
        if (prefixSum.find(sum - k) != prefixSum.end()) {
            count += prefixSum[sum - k];
        }

        // Store the current prefix sum
        prefixSum[sum]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3};
    int k = 3;

    int result = subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << ": "
         << result << endl;

    return 0;
}