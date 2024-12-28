// Second Largest Number in an array
#include<bits/stdc++.h>
using namespace std;
int secondLargestNumber(vector<int>&nums){
    int n=nums.size(),prev=-1,curr=nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i]>curr)
        {
            prev=curr;
            curr=nums[i];
        }
        if (nums[i]>prev && nums[i]!=curr)
        {
            prev=nums[i];
        }
    }
        return prev;
    
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to find the second largest number in an array"<<endl;
    int testcases;
    cout<<"Enter the number of testcases : ";
    cin >> testcases;
    while(testcases--)
    {
        int n;
        cout<<"Enter the size of the array : ";
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cout<<"Enter the element "<<i+1<<" : ";
            cin >> arr[i];
        }
        cout <<"Second Largest Number is : "<< secondLargestNumber(arr) << endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the second largest number in an array"<<endl;

    return 0;
}