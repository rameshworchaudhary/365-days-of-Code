#include<iostream>
using namespace std;

int main(){
       
    int arr[10] = {10,20,30,20,10,40,50,40,50,10};
    for(int i = 0; i<10;i++){
       int count = 0;
        for(int j =0;j<10;j++){
            if(arr[i] == arr[j]){
                count++;
            }        
        }
    
        if(count == 1){
            cout << "First repeating element: " << arr[i] << endl;
            break;
        }
    }
        return 0;
    }
