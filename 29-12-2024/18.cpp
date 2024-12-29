// Stock Buy and Sell
// 7,1,5,3,6,4
// maxprofit=5
#include<bits/stdc++.h>
using namespace std;
int stockBuyAndSell(vector<int>&nums){
    int minPrice=nums[0];
    int maxProfit=0;
    for (int i = 0; i < nums.size(); i++)
    {
        maxProfit=max(maxProfit,nums[i]-minPrice);
        minPrice=min(minPrice,nums[i]);
    }
    return maxProfit;
}
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<< "Hello "<<name<<", welcome to the program to find the maximum profit that can be obtained by buying and selling stocks"<<endl;
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
        cout<<"The maximum profit that can be obtained by buying and selling stocks is: "<<stockBuyAndSell(arr)<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the maximum profit that can be obtained by buying and selling stocks"<<endl;
    return 0;
}