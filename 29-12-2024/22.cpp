// Leaders in an array
// 10 22 12 3 0 6
// 22 12 6
#include<bits/stdc++.h>
using namespace std;
vector<int> leadersInAnArray(vector<int>&nums){
    int maxi=INT_MIN;
    int n=nums.size();
    vector<int>ans;
    for (int i = n-1; i >=0; i--)
    {
        if (nums[i]>maxi)
        {
            maxi=nums[i];
            ans.push_back(maxi);
        }
     maxi=max(maxi,nums[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find the leaders in an array"<<endl;
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
        vector<int> ans=leadersInAnArray(arr);
        cout<<"The leaders in the array are: ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the leaders in an Array "<<endl;
    return 0;
}