#include<iostream>
using namespace std;

int main(){
    int num[7] = {10, 15, 20, 25, 30, 35, 40};
    int count = 0;
    int count1 = 0;

    for(int i = 0; i < 7; i++){
        if(num[i] % 2 == 0){
            count++;
        }else{
            count1++;
        }
    }
        cout << "Even numbers: " << count << endl;
        cout << "Odd numbers: " << count1 << endl;
    
    return 0;
}
