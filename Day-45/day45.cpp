#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n=s.length();
    int start=0,maxlen=1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int flag=1;
            for(int k=0;k<(j-i+1)/2;k++){
                if(s[i+k]!=s[j-k]){
                    flag=0;
                }
            }
            if(flag && (j-i+1)>maxlen){
                start=i;
                maxlen=j-i+1;
            }
        }
    }
    cout<<s.substr(start,maxlen)<<endl;
    return 0;
}