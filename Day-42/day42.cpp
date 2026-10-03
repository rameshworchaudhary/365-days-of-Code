//merge two sorted array
#include<iostream>
using namespace std;

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            merged[k++] = arr1[i++];
        }
        else{
            merged[k++] = arr2[j++];
        }
    }

    while(i < n1){
        merged[k++] = arr1[i++];
    }

    while(j < n2){
        merged[k++] = arr2[j++];
    }

    for(int l = 0; l < n1 + n2; l++){
        cout << merged[l] << " ";
    }
    cout << endl;

    return 0;
}