#include<iostream>
using namespace std;

int main()
{
    int List[] = {1,2,3,-3,4,5,6,7,-1,2};
    int currSum = 0;
    int maxSum = 0;
    for(int i=0; i<sizeof(List)/sizeof(List[0]); i++)
    {
        currSum += List[i];
        if(currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum << endl;
    return 0;
}