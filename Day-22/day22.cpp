#include <iostream>
using namespace std;

int main() {
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {7, 8, 9, 10, 11, 12};
    int unionArr[12];
    int size = 0;

    for (int i = 0; i < 6; i++) {
        bool exists = false;
        for (int j = 0; j < size; j++) {
            if (unionArr[j] == arr1[i]) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            unionArr[size++] = arr1[i];
        }
    }

    for (int i = 0; i < 6; i++) {
        bool exists = false;
        for (int j = 0; j < size; j++) {
            if (unionArr[j] == arr2[i]) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            unionArr[size++] = arr2[i];
        }
    }

    cout << "Union elements are: ";
    for (int i = 0; i < size; i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;

    return 0;
}