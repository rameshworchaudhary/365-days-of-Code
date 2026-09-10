#include<iostream>
using namespace std;

int main(){
    int arr[6 ] = {1, 2, 3, 4, 5, 6};
    int smallest = arr[0];
    int largest = arr[0];
    for(int i =0;i<6;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }else if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest difference is:"<< largest - smallest;
    return 0;
}