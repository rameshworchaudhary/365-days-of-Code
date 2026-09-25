
#include<iostream>
using namespace std;

int main(){
int arr[] = {7,1,5,3,6,4};
int n = sizeof(arr)/sizeof(arr[0]);
int minPrice = arr[0];
int maxProfit = 0;
for(int i=1;i<n;i++){
    if(arr[i]<minPrice){
        minPrice = arr[i];
    }
    if(arr[i]-minPrice>maxProfit){
        maxProfit = arr[i]-minPrice;
    }
}
cout<<maxProfit;
return 0;
}