#include<iostream>
using namespace std;

int main(){
    int arr[17] = {1,2,0,0,0,4,5,7,0,0,0,8,9,0,0,0,10};
    int j = 0;
    for(int i = 0;i<17;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i = 0;i<17;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}