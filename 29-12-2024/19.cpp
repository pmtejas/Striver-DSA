// Reaarange array in alternating positive and negative numbers

#include<bits/stdc++.h>
using namespace std;
vector<int>reArrangeArray(vector<int>&nums){
    vector<int>ans(nums.size());
    int i=0,j=1;
    for (int k = 0; k < nums.size(); k++)
    {
        if (nums[k]>=0)
        {
            ans[i]=nums[k];
            i+=2;
        }
        else{
            ans[j]=nums[k];
            j+=2;
        }
    }
    return ans;
}
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to rearrange the array in alternating positive and negative numbers"<<endl;
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
        vector<int> ans=reArrangeArray(arr);
        cout<<"The array after rearranging in alternating positive and negative numbers is: ";
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to rearrange the array in alternating positive and negative numbers"<<endl;
    
    return 0;
}