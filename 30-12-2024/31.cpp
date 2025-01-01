// Three sum
// Given an array of integers, find all unique triplets in the array which gives the sum of zero.
// Note: The solution set must not contain duplicate triplets.
// Example:
// Input: [-1, 0, 1, 2, -1, -4]
// Output: [[-1, 0, 1], [-1, -1, 2]]

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>threeSum(vector<int>&nums){
    int n=nums.size();
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < n; i++)
    {
        if(i>0 &&nums[i]==nums[i-1])continue;
        int j=i+1;
        int k=n-1;
        while (j<k)
        {
            int sum=nums[i]+nums[j]+nums[k];
            if (sum<0)
            {
                j++;
            }
            else if (sum>0)
            {
                k--;
            }
            else
            {
                vector<int>temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1])j++;
                while(j<k && nums[k]==nums[k-1])k--;
            }
        }
    }
    return ans;
}

int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find the unique triplets in the array which gives the sum of zero"<<endl;
    int testcases;
    cout<<"Enter the number of testcases: ";
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cout<<"Enter the size of the array: ";
        cin>>n;
        vector<int>nums(n);
        cout<<"Enter the elements of the array: ";
        for (int i = 0; i < n; i++)
        {
            cin>>nums[i];
        }
        vector<vector<int>>ans=threeSum(nums);
        cout<<"The unique triplets in the array which gives the sum of zero are: "<<endl;
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    cout << "Thank you " << name<<" for using the program to find the unique triplets in the array which gives the sum of zero" << endl;
    return 0;
}