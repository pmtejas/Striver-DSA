// Longest Consecutive Sequence
#include<bits/stdc++.h>
using namespace std;
int longestConsecutiveSequence(vector<int>&nums){
    int n=nums.size();
    int longest=1;
    int cnt=0;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }
    for (auto it : st)
    {
        if (st.find(it-1)==st.end())
        {
            cnt=1;
            int x=it;
            while (st.find(x+1)!=st.end())
            {
                cnt++;
                x++;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}

int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find the longest consecutive sequence in an array"<<endl;
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
        int ans=longestConsecutiveSequence(arr);
        cout<<"The longest consecutive sequence in the array is: "<<ans<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the longest consecutive sequence in an Array "<<endl;
    
    return 0;
}