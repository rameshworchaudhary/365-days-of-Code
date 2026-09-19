#include<iostream>
using namespace std;

int main(){
    int list[] = {1,3,4,5,-1,-2};
    int n = sizeof(list)/sizeof(list[0]);
    int missing = 1;

    bool found = false;
    for(int i=0; i<n; i++){
        if(list[i] == missing){
            found = true;
            break;
        }
    }

    while(found){
        missing++;
        found = false;
        for(int i=0; i<n; i++){
            if(list[i] == missing){
                found = true;
                break;
            }
        }
    }

    cout << missing << endl;

    return 0;
}