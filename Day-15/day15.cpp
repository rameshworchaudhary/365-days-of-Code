#include<iostream>
using namespace std;
int main(){
    int arr[10] = {10,20,30,20,10,40,50,60,70,80};
for(int i = 0; i < 10; i++){

    for(int j = i + 1; j < 10; j++){

        if(arr[i] == arr[j]){

            cout << "First repeating element: " << arr[i];
            return 0;

        }
    }
}
}