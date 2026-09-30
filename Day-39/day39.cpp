#include<iostream>
using namespace std;

int main(){
    int arr[8] = {72, 73, 74, 75, 76, 77, 78, 79};
    int n = 8;

    for(int i = 0;i <n; i++){
            int answer = 0;
        for(int j = i+1; j<n; j++){
            if(arr[i] < arr[j]){
                answer = j-i;
                break;
            }
        }
    cout << answer << endl;
    }
    return 0;

}