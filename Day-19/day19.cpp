#include<iostream>
using namespace std;

int main(){
    int arr[7] = {1,2,3,4,5,1,2};
    int size = 7;
    int uniqueSize = 0;

    for(int i = 0; i < size; i++){
        bool isDuplicate = false;

        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate){
            arr[uniqueSize++] = arr[i];
        }
    }

for(int i = 0; i < uniqueSize; i++){
    cout<<arr[i]<<" ";
}

return 0;
}