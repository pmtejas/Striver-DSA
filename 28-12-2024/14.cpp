// Two sum Problem
#include<bits/stdc++.h>
using namespace std;
vector<int>twoSum(vector<int>&nums,int target){
    int n=nums.size();
    unordered_map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x=target-nums[i];
        if (mp.find(x)!=mp.end())
        {
            return {mp[x],i};
        }
        mp[nums[i]]=i;
    }
    return {-1,-1};
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to find the two sum problem"<<endl;
    int testcases;
    cout<<"Enter the number of testcases : ";
    cin >> testcases;
    while(testcases--)
    {
        int n,target;
        cout<<"Enter the size of the array : ";
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cout<<"Enter the element "<<i+1<<" : ";
            cin >> arr[i];
        }
        cout<<"You have entered the array as : ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Enter the target sum : ";
        cin >> target;
        vector<int> ans=twoSum(arr,target);
        cout<<"The indices are : "<<ans[0]<<" "<<ans[1]<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the two sum problem"<<endl;
    
    return 0;
}