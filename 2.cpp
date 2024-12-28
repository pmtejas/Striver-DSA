#include<bits/stdc++.h>
using namespace std;
int secondLargsetNumber(vector<int>&arr){
    int prev=-1,curr=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
       if (arr[i]>curr)
       {
            prev=curr;
            curr=arr[i];
       }
       if (arr[i]>prev&&arr[i]!=curr)
       {
            prev=arr[i];
       } 
    }
    return prev;
}

int main()
{
    vector<int>arr={1,2,3,4,56,6};
    cout<<secondLargsetNumber(arr);
    
    return 0;
}