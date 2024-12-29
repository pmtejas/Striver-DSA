// Next greater Permutation
#include<bits/stdc++.h>
using namespace std;
vector<int>nextGreaterPermutation(vector<int>&nums){
    int n=nums.size();
    int index=-1;
    for (int i = n-2; i >=0; i--)
    {
        if (nums[i]<nums[i+1])
        {
            index=i;
            break;
        }
    }
    if (index==-1)
    {
        reverse(nums.begin(),nums.end());
        return nums;
    }
    for (int i = n-1; i >index; i--)
    {
        if (nums[i]>nums[index])
        {
            swap(nums[i],nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1,nums.end());
    return nums;    
}
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find the next greater permutation of an array"<<endl;
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
        vector<int> ans=nextGreaterPermutation(arr);
        cout<<"The next greater permutation of the array is: ";
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the next greater permutation of an array"<<endl;
    
    return 0;
}