// Remove Duplicates and return the array size
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>&nums){
    int n=nums.size(),i=0;
    for (int j = 1; j < n; j++)
    {
        if (nums[i]!=nums[j])
        {
            i++;
            swap(nums[i],nums[j]);
        }  
    }
    return i+1; 
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to remove duplicates from an array"<<endl;
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
        cout <<"Size of the array after removing duplicates is : "<< removeDuplicates(arr) << endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to remove duplicates from an array"<<endl;
    
    return 0;
}