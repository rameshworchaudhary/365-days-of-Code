#include<iostream>
using namespace std;

int main(){
    int nums[] = {1,2,3,4,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    
    for(int i=0; i<n; i++){
        int result = 1;
        for(int j=0; j<n; j++){
            if(i != j){
                result *= nums[j];
            }
        }
        cout << result << endl;
    }
    return 0;
}