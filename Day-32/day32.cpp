#include<iostream>
using namespace std;

int main(){
    int nums[6] = {6, 4, 8, 3, 5, 2};
   
    int RG = 0;

    for(int i = 0; i < 6; i++){
        RG = -1;
        for(int j = i + 1; j < 6; j++){
            if(nums[j] > nums[i]){
                RG = nums[j];
                break;
        }
        cout << RG << " ";
    }
    
    return 0;
}