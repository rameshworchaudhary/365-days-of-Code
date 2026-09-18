#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,0,1,1,1,1};
    int maxCount = 0;
    int count = 0;

    for(int i =0;i<6;i++){
        if(arr[i] == 1){
            count++;
            maxCount = max(maxCount,count);
        }else{
            count = 0;
        }
    }
    cout<<maxCount;
    return 0;
}