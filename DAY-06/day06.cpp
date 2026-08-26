#include<iostream>
using namespace std;
 
int main(){
    string s = "I love you";
    int n = s.length();

    int count = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == ' '){
            count++;
        }
    }

    cout << count + 1 << endl; 
return 0;
}