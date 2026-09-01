#include<iostream>
using namespace std;

int main(){
    int  arr [7] = {10 , 12 , 14 , 16 , 18 , 20 , 22};
    int sum = 0;
    float average = 0;
    int c = 0;

    for(int i =0; i<7 ; i++){
        sum = sum + arr[i];
        c++;
    }
    average = sum / c;
    cout << "Sum of the array is : " << sum << endl;
    cout << "Average of the array is : " << average << endl;
    return 0;
}