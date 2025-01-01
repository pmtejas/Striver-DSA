// Majority element2 (Boyer-Moore Voting Algorithm)(n/3)
// array: [3,2,3]
// output: [3]
// array: [1,1,1,3,3,2,2,2]
// output: [1,2]
// array: [1]
// output: [1]
#include<bits/stdc++.h>
using namespace std;
vector<int>majorityElement2(vector<int>&nums){
    int n=nums.size();
    int num1=-1,num2=-1,count1=0,count2=0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]==num1){
            count1++;
        }
        else if(nums[i]==num2){
            count2++;
        }
        else if(count1==0){
            num1=nums[i];
            count1=1;
        }
        else if(count2==0){
            num2=nums[i];
            count2=1;
        }
        else{
            count1--;
            count2--;
        }
    }
    count1=0;
    count2=0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]==num1){
            count1++;
        }
        else if(nums[i]==num2){
            count2++;
        }
    }
    vector<int>ans;
    if(count1>n/3){
        ans.push_back(num1);
    }
    if(count2>n/3){
        ans.push_back(num2);
    }
    return ans;
}
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find majority element in an array using Boyer-Moore Voting Algorithm"<<endl;
    int testcases;
    cout<<"Enter the number of testcases: ";
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cout<<"Enter the size of the array: ";
        cin>>n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)
        {
            cout<<"Enter the element "<<i+1<<" : ";
            cin>>nums[i];
        }
        vector<int>ans=majorityElement2(nums);
        cout<<"The majority elements in the array are: ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    cout << "Thank you " << name<<" for using the program to find majority element in an array"<<endl;
    
    return 0;
}