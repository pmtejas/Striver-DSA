// Missing Number in an array
#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&nums){
  int n = nums.size();
    long long optimum_sum = (n * (n + 1)) / 2; // the sum if no number is absent
    long long actual_sum = 0;
    for (auto it : nums)
    {
        actual_sum += it;
    }
    return optimum_sum - actual_sum;
}
int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to find the missing number in an array"<<endl;
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
        cout <<"Missing Number is : "<< missingNumber(arr) << endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to find the missing number in an array"<<endl;

    return 0;
}