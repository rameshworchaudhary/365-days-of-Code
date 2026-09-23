#include<iostream>
using namespace std;

int main(){
    int nums[6] = {1,2,3,4,5,6};


    for(int i = 0; i < 6; i++){
        int RG = -1;
        for(int j = i + 1; j < 6; j++){
            if(nums[j] > nums[i]){
                RG = nums[j];
                break;
        }
        }
        cout << RG << " ";
    }
    
    return 0;
}