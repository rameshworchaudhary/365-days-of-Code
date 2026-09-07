#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,5,6};
    int arraySize = sizeof(arr) / sizeof(arr[0]);
    int n = arraySize + 1;
    int sum = 0;
    int result = 0;
    int sum1 = n*(n+1)/2;
    for(int i = 0;i<arraySize;i++){
        sum = sum + arr[i];
    }
    result = sum1 - sum;
    cout<<"The missing number is: "<<result;
    return 0;
}