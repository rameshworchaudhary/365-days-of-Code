#include<iostream>
using namespace std;

int main(){
    int arr[6] = {6,5,4,3,2,1};
    int smallest = arr[0];
    for (int i=0;i<6;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<smallest;
    return 0;
}
