// Permutation
#include<bits/stdc++.h>
using namespace std;
void permute(vector<int>&nums,int i,vector<vector<int>>&ans){
    if (i==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int j = i; j < nums.size(); j++)
    {
        swap(nums[i],nums[j]);
        permute(nums,i+1,ans);
        swap(nums[i],nums[j]);
    }
}
vector<vector<int>>permute(vector<int>&nums){
    vector<vector<int>>ans;
    permute(nums,0,ans);
    return ans; 
}

int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find all the permutations of an array"<<endl;
    int testcases;
    cout<<"Enter the number of testcases: ";
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cout<<"Enter the size of the array: ";
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter the element "<<i+1<<" : ";
            cin>>arr[i];
        }
        cout<<"You have entered the array as: ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        vector<vector<int>> ans=permute(arr);
        cout<<"The permutations of the array are: "<<endl;
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<"Thank you "<<name<<", you completed the program to find all the permutations of an array"<<endl;
    
    return 0;
}