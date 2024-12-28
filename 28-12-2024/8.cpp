// Move Zeros to End
#include<bits/stdc++.h>
using namespace std;
vector<int> moveZerosToTheEnd(vector<int>&nums){
    int n=nums.size(),j=-1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]==0)
        {
            j=i;
            break;
        }
    }
    if (j==-1)
    {
        return nums;
    }
    for (int i = j+1; i < n; i++)
    {
        if (nums[i]!=0)
        {
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return nums;
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to move zeros to the end of the array"<<endl;
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
        cout<<"Array before moving zeros to the end is : ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        arr=moveZerosToTheEnd(arr);
        cout<<"Array after moving zeros to the end is : ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to move zeros to the end of the array"<<endl;
    return 0;
}