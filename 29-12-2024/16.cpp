// Majority Element
// Given an array of size n, find the majority element. The majority element is the element that appears more than n/2 times.
// You may assume that the array is non-empty and the majority element always exist in the array.
// Example 1:
// Input: [3,2,3]
// Output: 3
// Example 2:
// Input: [2,2,1,1,1,2,2]
// Output: 2

#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>&nums){
    int n=nums.size();
    int ele=nums[0];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (count==0)
        {
            ele=nums[i];
        }
        count+=(ele==nums[i])?1:-1;
    }
    return ele;
}

int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find the majority element in an array"<<endl;
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
        cout<<"The majority element in the array is: "<<majorityElement(arr)<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the majority element in an array"<<endl;
    

    
    return 0;
}