#include<iostream>
using namespace std;

int main(){
    int arr[10] = {10,-20,30,-40,50,-60,70,-80,90,-100};
    int count = 0;
    int count1 = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i]>0){
            count++;
        }else{
            count1++;
        }
    }
    cout<<"Positive numbers: "<<count<<endl;
    cout<<"Negative numbers: "<<count1<<endl;
    return 0;
}