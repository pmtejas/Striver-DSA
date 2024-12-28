// Single Number
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>&nums){
    int n=nums.size(),ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^nums[i];
    }
    return ans;
}
int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to find the single number in an array"<<endl;
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
        cout<<"you entered the following array : ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout <<"Single Number is : "<< singleNumber(arr) << endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the single number in an array"<<endl;
    
    return 0;
}