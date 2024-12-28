// Consecutive Ones
#include<bits/stdc++.h>
using namespace std;
int consecutiveOnes(vector<int>&nums){
    int n=nums.size();
    int cnt;
    int ans=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cnt=0;
        while (i<n && nums[i]==1)
        {
            cnt++;
            i++;
        }
        ans=max(ans,cnt);
    }
    return ans;
}
int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to find the maximum number of consecutive 1's in an array"<<endl;
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
        cout <<"Maximum number of consecutive 1's is : "<< consecutiveOnes(arr) << endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the maximum number of consecutive 1's in an array"<<endl;
    
    return 0;
}