#include<iostream>
using namespace std;

int main() {
    int arr[7] = {1, 2, 2, 2, 3, 2, 3};
    int found = 0;

    for (int i = 0; i < 7; i++) {
        int count = 0;
        for (int j = 0; j < 7; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 7 / 2) {
            cout << "Majority element: " << arr[i] << endl;
            found = 1;
            break;
        }
    }
    if (!found) {
        cout << "No majority element" << endl;
    }

    return 0;
}