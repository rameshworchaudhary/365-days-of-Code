#include<iostream>

using namespace std;

int main(){
    int arr[10]={1,8,6,2,5,4,8,3,7};
    int n=9;
    int maxArea=0;
    int left=0;
    int right=n-1;
    while(left<right){
        int height=min(arr[left],arr[right]);
        int width=right-left;
        int area=height*width;

        maxArea=max(maxArea,area);
        if(arr[left]<arr[right]){
            left++;
        } else {
            right--;
        }
    }
    cout<<maxArea<<endl;
    return 0;
}