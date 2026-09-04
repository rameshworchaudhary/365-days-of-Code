#include<iostream>
using namespace std;

int main(){
    int arr[10] = {10,20,10,30,10,20,30,40,50,60};
    int target = 10;
    int count = 0; 
    for(int i =0;i<10;i++){
        if(arr[i]==target){
            count++;
        }
    }
    cout<<"Count of "<<target<<" is: "<<count<<endl;
    return 0;
}

