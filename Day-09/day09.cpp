#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 60};
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    cout << "The largest element in the array is: " << largest << endl;
    cout << "The second largest element in the array is: " << secondLargest << endl;
    return 0;
}
