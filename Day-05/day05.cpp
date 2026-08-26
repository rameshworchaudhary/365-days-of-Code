#include<iostream>
using namespace std;

int main(){
    string s = "Ishwor";

    for (int i = 0;i<s.length();i++){
        if(s[i]!=s[s.length()-1-i]){
            cout<<"Not a Palindrome";
            return 0;
        }
    }
            cout<<"Palindrome";
    
    return 0;
}