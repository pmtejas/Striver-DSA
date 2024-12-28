#include<bits/stdc++.h>
using namespace std;
bool isSortedAndRotated(vector<int>&arr){
    int n=arr.size(),cnt=0,curr=arr[0];
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            cnt++;
        }
    }
    if(cnt==0){
        return true;
    }
    else if(cnt==1&&arr[0]>=arr[n-1]){
        return true;
    }
    
    return false;
}
int main()
{
    vector<int>arr={2,3,4,5,6,1};
    bool result=isSortedAndRotated(arr);
    if (result)
    {
        cout<<"it is Sorted and Rotated";
    }
    else
    {
    cout<<"It is not Sorted and Rotated";
    }
    
    
    return 0;
}