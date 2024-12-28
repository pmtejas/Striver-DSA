// check is the array is sorted and rotated
#include<bits/stdc++.h>
using namespace std;
bool isSortedAndRotated(vector<int>&nums){
    int n=nums.size(),cnt=0;
    for (int i = 0; i < n-1; i++)
    {
        if (nums[i]>nums[i+1])
        {
            cnt++;
        }
    }
    if (cnt==0)
    {
        return true;
    }
    if (cnt==1 && nums[0]>=nums[n-1])
    {
        return true;
    }
    return false;
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to check if the array is sorted and rotated"<<endl;
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
        cout << (isSortedAndRotated(arr) ? "Yes" : "No") << endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to check if the array is sorted and rotated"<<endl;
    
    return 0;
}