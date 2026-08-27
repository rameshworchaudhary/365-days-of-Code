#include<iostream>
using namespace std;

int main(){
    int arr [5] = {10,40,100,50,60};
    int largest = arr[0];
    for(int i = 0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest number in the array is: "<<largest;
    return 0;
}