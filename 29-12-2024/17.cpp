// Kadane Algorithm
#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>&nums){
    int n=nums.size();
    int max_Sum=INT_MIN;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=max(nums[i],sum+nums[i]);
        max_Sum=max(sum,max_Sum);
    }
    return max_Sum;
}

int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find the maximum Subarray in an array"<<endl;
    int testcases;
    cout<<"Enter the number of testcases: ";
    cin>>testcases;
    while (testcases--)
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
        cout<<"The maximum subarray of the array is: "<<maxSubArray(arr)<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the maxSubarray in an array using kadane Algorithm"<<endl;
    
    
    return 0;
}