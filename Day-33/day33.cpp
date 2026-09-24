#include<iostream>
#include <climits>
using namespace std;

int main(){
    int MinDif = INT_MAX;
    int diff = 0 ;
    int arr[5] = {1, 5, 3, 19, 18};

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]!= arr[j]){
                diff = abs(arr[i] - arr[j]);
                if(diff < MinDif){
                    MinDif = diff;
                }
            }
        }
    }
    cout<<"Minimum Difference is: "<<MinDif<<endl;
    return 0;
}
