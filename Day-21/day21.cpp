#include<iostream>
using namespace std;

int main(){
    int arr1 [6] = {1,2,3,4,5,6};
    int arr2 [6] = {7,2,4,3,11,12};
    for(int i =0;i<6;i++){
        for(int j =0;j<6;j++){
            if(arr1[i]==arr2[j]){
                cout<<"The common element is: "<<arr1[i]<<endl;
            }
        }
    }
    return 0;
}