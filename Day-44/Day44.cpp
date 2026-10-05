//longest common string without repeating characters
#include<iostream>
using namespace std;

int main(){
    string s = "abcabcbb";
    int n = s.length();
    int maxLength = 0;
    int start = 0;
    int charIndex[256];
    for(int i = 0; i < 256; i++){
        charIndex[i] = -1;
    }
    for(int i = 0; i < n; i++){
        if(charIndex[s[i]] >= start){
            start = charIndex[s[i]] + 1;
        }
        charIndex[s[i]] = i;
        if(i - start + 1 > maxLength){
            maxLength = i - start + 1;
        }
    }
    cout << maxLength << endl;
    return 0;
}