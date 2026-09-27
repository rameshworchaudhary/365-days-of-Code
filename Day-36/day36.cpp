#include<iostream>
using namespace std;

int main(){
    int nums[6] = {1, 2, 3, 4, 5, 6};
    int k = 7;
    int subSum = 0;
    int count = 0;
    for(int i = 0; i < 6; i++){
        for(int j = i; j < 6; j++){
            subSum += nums[j];
            if(subSum == k){
                count++;
            }
        }
        subSum = 0;
    }
cout<<"The number of subarrays with sum equal to "<<k<<" is: "<<count<<endl;
    return 0;
}