#include<iostream>
using namespace std;

int main(){
    int arr[7] = {1,2,3,4,5,3,5};
    int count = 0;

    for (int i=0;i<7;i++){
        for(int j =i+1;j<7;j++){
            if(arr[i]==arr[j]){
                cout << "Duplicate element found: " << arr[i] << endl;
                count++;
                break;
            }
        }
    }

    if(!count){
        cout << "No duplicate elements found" << endl;
    }
return 0;
}
