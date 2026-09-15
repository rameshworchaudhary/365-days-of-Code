#include <iostream>
using namespace std;

int main() {

    int arr[6] = {16, 17, 5, 4, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {

        bool isLeader = true;

        for (int j = i + 1; j < n; j++) {

            if (arr[j] > arr[i]) {
                isLeader = false;
                break;
            }
        }

        if (isLeader) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}