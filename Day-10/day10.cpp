#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int arr[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for(int i = 0; i < n/2; i++){
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
