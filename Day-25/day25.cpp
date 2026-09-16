#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1, 3, 5, 2, 2};
    int n = 5;

    int totalSum = 0;
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    for (int i = 0; i < n; i++) {

        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            cout << "Equilibrium index: " << i << endl;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << "No equilibrium index" << endl;

    return 0;
}