// Rotate an array by left by on place
#include<bits/stdc++.h>
using namespace std;
void leftRotateByOnePlace(vector<int>&nums){
    int n=nums.size(),temp=nums[0];
    for (int i = 0; i < n; i++)
    {
        nums[i]=nums[i+1];
    }
    nums[n-1]=temp;
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    cin >> name;
    cout<<"Hello "<<name<<", welcome to the program to rotate an array by left by one place"<<endl;
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
        leftRotateByOnePlace(arr);
        cout<<"Array after rotating left by one place is : ";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "<<name<<", you completed the program to rotate an array by left by one place"<<endl;
    
    return 0;
}