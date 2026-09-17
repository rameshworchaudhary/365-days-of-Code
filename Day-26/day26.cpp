#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5] = {10, 200, 30, 40, 50};
    int smallest = arr[0];
    int secondSmallest = INT_MAX;
    for(int i = 1;i < 5;i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i]< secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }
    cout << "Smallest element in the array is: " << smallest << endl;
    cout << "Second smallest element in the array is: " << secondSmallest << endl;

    return 0;

}