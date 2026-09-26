#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int k = 2;

    for(int i =0; i<5; i++){
        cout<<arr[(i-k+5)%5]<<" ";
    }
    cout<<endl;
    return 0;
}